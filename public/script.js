// DOM Elements
const downloadForm = document.getElementById('downloadForm');
const videoUrlInput = document.getElementById('videoUrl');
const analyzeBtn = document.getElementById('analyzeBtn');
const loading = document.getElementById('loading');
const videoInfo = document.getElementById('videoInfo');
const downloadBtn = document.getElementById('downloadBtn');
const downloadProgress = document.getElementById('downloadProgress');

// Video info elements
const videoThumbnail = document.getElementById('videoThumbnail');
const videoTitle = document.getElementById('videoTitle');
const videoUploader = document.getElementById('videoUploader');
const videoDuration = document.getElementById('videoDuration');
const videoDescription = document.getElementById('videoDescription');
const formatSelect = document.getElementById('formatSelect');
const progressText = document.getElementById('progressText');

// State
let currentVideoData = null;

// Utility Functions
function showElement(element) {
    element.classList.remove('hidden');
}

function hideElement(element) {
    element.classList.add('hidden');
}

function formatDuration(seconds) {
    if (!seconds) return 'Unknown duration';
    
    const hours = Math.floor(seconds / 3600);
    const minutes = Math.floor((seconds % 3600) / 60);
    const remainingSeconds = seconds % 60;
    
    if (hours > 0) {
        return `${hours}:${minutes.toString().padStart(2, '0')}:${remainingSeconds.toString().padStart(2, '0')}`;
    }
    return `${minutes}:${remainingSeconds.toString().padStart(2, '0')}`;
}

function formatFileSize(bytes) {
    if (!bytes) return 'Unknown size';
    
    const sizes = ['Bytes', 'KB', 'MB', 'GB'];
    const i = Math.floor(Math.log(bytes) / Math.log(1024));
    return Math.round(bytes / Math.pow(1024, i) * 100) / 100 + ' ' + sizes[i];
}

function getQualityLabel(format) {
    if (format.resolution && format.resolution !== 'audio') {
        return `${format.resolution} (${format.ext.toUpperCase()}) - ${formatFileSize(format.filesize)}`;
    } else if (format.acodec && format.acodec !== 'none') {
        return `Audio Only (${format.ext.toUpperCase()}) - ${formatFileSize(format.filesize)}`;
    }
    return `${format.format_note || format.ext.toUpperCase()} - ${formatFileSize(format.filesize)}`;
}

function validateUrl(url) {
    const supportedDomains = [
        'youtube.com', 'youtu.be', 'facebook.com', 'fb.watch', 'linkedin.com',
        'instagram.com', 'tiktok.com', 'twitter.com', 'x.com', 'vimeo.com',
        'dailymotion.com', 'twitch.tv', 'reddit.com'
    ];
    
    try {
        const urlObj = new URL(url);
        return supportedDomains.some(domain => urlObj.hostname.includes(domain));
    } catch {
        return false;
    }
}

function showNotification(message, type = 'info') {
    // Create notification element
    const notification = document.createElement('div');
    notification.className = `notification notification-${type}`;
    notification.innerHTML = `
        <i class="fas fa-${type === 'success' ? 'check-circle' : type === 'error' ? 'exclamation-circle' : 'info-circle'}"></i>
        <span>${message}</span>
        <button class="notification-close" onclick="this.parentElement.remove()">
            <i class="fas fa-times"></i>
        </button>
    `;
    
    // Add styles for notification
    notification.style.cssText = `
        position: fixed;
        top: 100px;
        right: 20px;
        background: ${type === 'success' ? '#28a745' : type === 'error' ? '#dc3545' : '#007bff'};
        color: white;
        padding: 1rem 1.5rem;
        border-radius: 8px;
        box-shadow: 0 4px 12px rgba(0,0,0,0.15);
        z-index: 10000;
        display: flex;
        align-items: center;
        gap: 0.5rem;
        max-width: 400px;
        animation: slideIn 0.3s ease;
    `;
    
    document.body.appendChild(notification);
    
    // Auto remove after 5 seconds
    setTimeout(() => {
        if (notification.parentElement) {
            notification.remove();
        }
    }, 5000);
}

// Main Functions
async function analyzeVideo(url) {
    try {
        showElement(loading);
        hideElement(videoInfo);
        hideElement(downloadProgress);
        
        // Validate URL
        if (!validateUrl(url)) {
            throw new Error('Please enter a valid URL from a supported platform (YouTube, Facebook, LinkedIn, etc.)');
        }
        
        const response = await fetch('/api/video-info', {
            method: 'POST',
            headers: {
                'Content-Type': 'application/json',
            },
            body: JSON.stringify({ url })
        });
        
        const data = await response.json();
        
        if (!response.ok) {
            throw new Error(data.error || 'Failed to analyze video');
        }
        
        currentVideoData = data;
        displayVideoInfo(data);
        
    } catch (error) {
        console.error('Analysis error:', error);
        showNotification(error.message, 'error');
    } finally {
        hideElement(loading);
    }
}

function displayVideoInfo(data) {
    // Set video thumbnail
    if (data.thumbnail) {
        videoThumbnail.src = data.thumbnail;
        videoThumbnail.alt = data.title;
    }
    
    // Set video details
    videoTitle.textContent = data.title || 'Unknown Title';
    videoUploader.innerHTML = `<i class="fas fa-user"></i> ${data.uploader || 'Unknown Uploader'}`;
    videoDuration.innerHTML = `<i class="fas fa-clock"></i> ${formatDuration(data.duration)}`;
    videoDescription.textContent = data.description || 'No description available';
    
    // Populate format options
    formatSelect.innerHTML = '<option value="">Select quality...</option>';
    
    if (data.formats && data.formats.length > 0) {
        // Sort formats by quality (video first, then audio)
        const videoFormats = data.formats.filter(f => f.vcodec && f.vcodec !== 'none');
        const audioFormats = data.formats.filter(f => f.acodec && f.acodec !== 'none' && (!f.vcodec || f.vcodec === 'none'));
        
        // Add video formats
        if (videoFormats.length > 0) {
            const videoGroup = document.createElement('optgroup');
            videoGroup.label = 'Video Formats';
            
            videoFormats
                .sort((a, b) => {
                    // Sort by resolution/quality
                    const getResolutionValue = (format) => {
                        if (!format.resolution) return 0;
                        const match = format.resolution.match(/(\d+)/);
                        return match ? parseInt(match[1]) : 0;
                    };
                    return getResolutionValue(b) - getResolutionValue(a);
                })
                .forEach(format => {
                    const option = document.createElement('option');
                    option.value = format.format_id;
                    option.textContent = getQualityLabel(format);
                    videoGroup.appendChild(option);
                });
            
            formatSelect.appendChild(videoGroup);
        }
        
        // Add audio formats
        if (audioFormats.length > 0) {
            const audioGroup = document.createElement('optgroup');
            audioGroup.label = 'Audio Only';
            
            audioFormats.forEach(format => {
                const option = document.createElement('option');
                option.value = format.format_id;
                option.textContent = getQualityLabel(format);
                audioGroup.appendChild(option);
            });
            
            formatSelect.appendChild(audioGroup);
        }
        
        // Add best quality option
        const bestOption = document.createElement('option');
        bestOption.value = 'best';
        bestOption.textContent = 'Best Available Quality (Auto)';
        formatSelect.insertBefore(bestOption, formatSelect.firstChild.nextSibling);
    }
    
    showElement(videoInfo);
}

async function downloadVideo() {
    try {
        const selectedFormat = formatSelect.value;
        
        if (!selectedFormat) {
            showNotification('Please select a quality format', 'error');
            return;
        }
        
        if (!currentVideoData) {
            showNotification('Please analyze a video first', 'error');
            return;
        }
        
        hideElement(videoInfo);
        showElement(downloadProgress);
        
        progressText.textContent = 'Starting download...';
        
        const response = await fetch('/api/download', {
            method: 'POST',
            headers: {
                'Content-Type': 'application/json',
            },
            body: JSON.stringify({ 
                url: videoUrlInput.value,
                format: selectedFormat
            })
        });
        
        const data = await response.json();
        
        if (!response.ok) {
            throw new Error(data.error || 'Download failed');
        }
        
        progressText.textContent = 'Download completed!';
        showNotification('Video downloaded successfully!', 'success');
        
        // Show download link
        if (data.filename) {
            const downloadLink = document.createElement('a');
            downloadLink.href = `/api/download/${encodeURIComponent(data.filename)}`;
            downloadLink.download = data.filename;
            downloadLink.style.cssText = `
                display: inline-block;
                margin-top: 1rem;
                padding: 0.8rem 1.5rem;
                background: #28a745;
                color: white;
                text-decoration: none;
                border-radius: 8px;
                font-weight: 600;
            `;
            downloadLink.innerHTML = '<i class="fas fa-download"></i> Download File';
            
            downloadProgress.appendChild(downloadLink);
        }
        
    } catch (error) {
        console.error('Download error:', error);
        showNotification(error.message, 'error');
        hideElement(downloadProgress);
        showElement(videoInfo);
    }
}

// Event Listeners
downloadForm.addEventListener('submit', (e) => {
    e.preventDefault();
    const url = videoUrlInput.value.trim();
    
    if (url) {
        analyzeVideo(url);
    } else {
        showNotification('Please enter a video URL', 'error');
    }
});

downloadBtn.addEventListener('click', downloadVideo);

// Smooth scrolling for navigation links
document.querySelectorAll('a[href^="#"]').forEach(anchor => {
    anchor.addEventListener('click', function (e) {
        e.preventDefault();
        const target = document.querySelector(this.getAttribute('href'));
        if (target) {
            target.scrollIntoView({
                behavior: 'smooth',
                block: 'start'
            });
        }
    });
});

// Add loading animation styles
const style = document.createElement('style');
style.textContent = `
    @keyframes slideIn {
        from {
            transform: translateX(100%);
            opacity: 0;
        }
        to {
            transform: translateX(0);
            opacity: 1;
        }
    }
    
    .notification-close {
        background: none;
        border: none;
        color: white;
        cursor: pointer;
        padding: 0;
        margin-left: 0.5rem;
    }
    
    .notification-close:hover {
        opacity: 0.8;
    }
`;
document.head.appendChild(style);

// Initialize
console.log('VideoVault - Professional Video Downloader loaded successfully!');