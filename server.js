const express = require('express');
const cors = require('cors');
const path = require('path');
const YTDlpWrap = require('yt-dlp-wrap').default;
const fs = require('fs');

const app = express();
const PORT = process.env.PORT || 3000;

// Middleware
app.use(cors());
app.use(express.json());
app.use(express.static('public'));

// Initialize yt-dlp
const ytDlpWrap = new YTDlpWrap();

// Serve the main page
app.get('/', (req, res) => {
    res.sendFile(path.join(__dirname, 'public', 'index.html'));
});

// API endpoint to get video info
app.post('/api/video-info', async (req, res) => {
    try {
        const { url } = req.body;
        
        if (!url) {
            return res.status(400).json({ error: 'URL is required' });
        }

        // Get video information using yt-dlp
        const videoInfo = await ytDlpWrap.getVideoInfo(url);
        
        // Extract available formats
        const formats = videoInfo.formats?.map(format => ({
            format_id: format.format_id,
            ext: format.ext,
            resolution: format.resolution || 'audio',
            filesize: format.filesize,
            quality: format.quality,
            format_note: format.format_note,
            vcodec: format.vcodec,
            acodec: format.acodec
        })) || [];

        res.json({
            title: videoInfo.title,
            thumbnail: videoInfo.thumbnail,
            duration: videoInfo.duration,
            uploader: videoInfo.uploader,
            formats: formats,
            description: videoInfo.description?.substring(0, 200) + '...'
        });

    } catch (error) {
        console.error('Error getting video info:', error);
        res.status(500).json({ 
            error: 'Failed to get video information. Please check the URL and try again.' 
        });
    }
});

// API endpoint to download video
app.post('/api/download', async (req, res) => {
    try {
        const { url, format } = req.body;
        
        if (!url) {
            return res.status(400).json({ error: 'URL is required' });
        }

        // Create downloads directory if it doesn't exist
        const downloadsDir = path.join(__dirname, 'downloads');
        if (!fs.existsSync(downloadsDir)) {
            fs.mkdirSync(downloadsDir);
        }

        // Set up download options
        const options = {
            format: format || 'best',
            output: path.join(downloadsDir, '%(title)s.%(ext)s')
        };

        // Start download
        const downloadProcess = ytDlpWrap.exec([
            url,
            '-f', options.format,
            '-o', options.output
        ]);

        let downloadPath = '';
        
        downloadProcess.on('progress', (data) => {
            // You can emit progress updates here if needed
            console.log('Download progress:', data);
        });

        downloadProcess.on('ytDlpEvent', (eventType, eventData) => {
            if (eventType === 'download' && eventData.includes('Destination:')) {
                downloadPath = eventData.split('Destination:')[1].trim();
            }
        });

        downloadProcess.on('close', (code) => {
            if (code === 0 && downloadPath) {
                const filename = path.basename(downloadPath);
                res.json({ 
                    success: true, 
                    message: 'Download completed successfully!',
                    filename: filename
                });
            } else {
                res.status(500).json({ 
                    error: 'Download failed. Please try again.' 
                });
            }
        });

    } catch (error) {
        console.error('Error downloading video:', error);
        res.status(500).json({ 
            error: 'Failed to download video. Please try again.' 
        });
    }
});

// API endpoint to serve downloaded files
app.get('/api/download/:filename', (req, res) => {
    const filename = req.params.filename;
    const filePath = path.join(__dirname, 'downloads', filename);
    
    if (fs.existsSync(filePath)) {
        res.download(filePath);
    } else {
        res.status(404).json({ error: 'File not found' });
    }
});

// Health check endpoint
app.get('/api/health', (req, res) => {
    res.json({ status: 'OK', message: 'Video Downloader API is running' });
});

// Start server
app.listen(PORT, () => {
    console.log(`🚀 Video Downloader Server running on http://localhost:${PORT}`);
    console.log(`📁 Downloads will be saved to: ${path.join(__dirname, 'downloads')}`);
});