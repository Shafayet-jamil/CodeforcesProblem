# VideoVault - Professional Video Downloader

A beautiful, modern web application for downloading videos from popular social media platforms including YouTube, Facebook, LinkedIn, Instagram, TikTok, and 1000+ more platforms. Supports up to 8K video quality with a stunning, responsive design.

![VideoVault Screenshot](https://github.com/user-attachments/assets/63f156cb-dc7a-4e9a-a5ae-521a45d8a170)

## ✨ Features

- 🎥 **Multi-Platform Support**: Download from YouTube, Facebook, LinkedIn, Instagram, TikTok, Twitter, Vimeo, and 1000+ more platforms
- 🔥 **Up to 8K Quality**: Support for all video quality formats from 144p to 8K UHD, including HDR and high frame rates
- ⚡ **Lightning Fast**: Optimized download speeds with advanced algorithms
- 🎵 **Audio Extraction**: Extract high-quality audio in MP3, AAC, FLAC, and other popular formats
- 📱 **Mobile Friendly**: Fully responsive design that works perfectly on all devices
- 🔒 **100% Safe**: No malware, no ads, no tracking - privacy-focused design
- 🎨 **Beautiful UI**: Modern, stunning design with gradient animations and glassmorphism effects

## 🚀 Quick Start

### Prerequisites

- Node.js (v14 or higher)
- Python 3.6+
- yt-dlp (installed automatically)

### Installation

1. **Clone the repository**
```bash
git clone https://github.com/Shafayet-jamil/CodeforcesProblem.git
cd CodeforcesProblem
```

2. **Install dependencies**
```bash
npm install
```

3. **Install yt-dlp**
```bash
pip install yt-dlp
```

4. **Start the server**
```bash
npm start
```

5. **Open your browser**
Navigate to `http://localhost:3000`

## 🎯 How to Use

1. **Paste Video URL**: Enter any video URL from supported platforms
2. **Analyze Video**: Click "Analyze" to get video information and available formats
3. **Choose Quality**: Select your preferred video quality (up to 8K)
4. **Download**: Click "Download Video" to start the download process

## 🌐 Supported Platforms

- ✅ YouTube
- ✅ Facebook
- ✅ LinkedIn
- ✅ Instagram
- ✅ TikTok
- ✅ Twitter/X
- ✅ Vimeo
- ✅ Dailymotion
- ✅ Reddit
- ✅ Twitch
- ✅ And 1000+ more platforms!

## 🛠️ API Endpoints

### GET `/`
Serves the main web application

### POST `/api/video-info`
Analyzes a video URL and returns metadata
```json
{
  "url": "https://www.youtube.com/watch?v=example"
}
```

### POST `/api/download`
Downloads a video in specified format
```json
{
  "url": "https://www.youtube.com/watch?v=example",
  "format": "best"
}
```

### GET `/api/download/:filename`
Serves downloaded files

### GET `/api/health`
Health check endpoint

## 🏗️ Project Structure

```
CodeforcesProblem/
├── public/                 # Frontend assets
│   ├── index.html         # Main HTML file
│   ├── styles.css         # Styling with modern design
│   └── script.js          # Frontend JavaScript
├── downloads/             # Downloaded videos storage
├── server.js              # Express server
├── package.json           # Node.js dependencies
└── README.md             # This file
```

## 🎨 Design Features

- **Gradient Backgrounds**: Beautiful purple-blue gradient with floating animations
- **Glassmorphism**: Modern glass-effect cards with backdrop blur
- **Responsive Grid**: Adaptive layout that works on all screen sizes
- **Smooth Animations**: Hover effects and transitions for better UX
- **Modern Typography**: Clean, readable fonts with proper hierarchy
- **Professional Icons**: Font Awesome icons for better visual appeal

## 🔧 Development

### Running in Development Mode
```bash
npm run dev
```

### Dependencies
- **Express**: Web server framework
- **yt-dlp-wrap**: Node.js wrapper for yt-dlp
- **cors**: Cross-origin resource sharing
- **axios**: HTTP client for API requests

## 📝 License

This project is licensed under the ISC License.

## 🤝 Contributing

1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Test thoroughly
5. Submit a pull request

## ⚠️ Legal Notice

This tool is for educational and personal use only. Please respect copyright laws and the terms of service of the platforms you're downloading from. Always ensure you have the right to download and use the content.

## 🔧 Troubleshooting

### Common Issues

**Network errors**: If you encounter network issues, ensure you have a stable internet connection and that yt-dlp is up to date.

**Missing dependencies**: Run `npm install` and `pip install yt-dlp` to ensure all dependencies are installed.

**Port conflicts**: If port 3000 is in use, set the PORT environment variable: `PORT=8080 npm start`

---

**Previous Content**: This repository also contains competitive programming solutions from Codeforces platform. 
