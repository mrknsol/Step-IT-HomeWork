const http = require('http'); 
const { readFile, writeFile } = require('../fileManager/fileManager'); 

const server = http.createServer((req, res) => {
    if (req.url === '/') {
        res.statusCode = 200;  
        res.setHeader('Content-Type', 'text/plain');  
        res.end('Welcome to my first Node.js server!'); 
    } 
    else if (req.url === '/file') {
        if (req.method === 'GET') {
            readFile('data.txt')
                .then((data) => {
                    res.statusCode = 200;
                    res.setHeader('Content-Type', 'text/plain');
                    res.end(data); 
                })
                .catch(() => {
                    res.statusCode = 404;
                    res.setHeader('Content-Type', 'text/plain');
                    res.end('File not found');  
                });
        } 
        else if (req.method === 'POST') {
            let body = '';
            req.on('data', chunk => {
                body += chunk;  
            });
            req.on('end', () => {
                writeFile('data.txt', body)
                    .then(() => {
                        res.statusCode = 200;
                        res.setHeader('Content-Type', 'text/plain');
                        res.end('File updated successfully');  
                    })
                    .catch(() => {
                        res.statusCode = 500;
                        res.setHeader('Content-Type', 'text/plain');
                        res.end('Error writing to file'); 
                    });
            });
        }
    }
    else if (req.url === '/time') {
        const time = new Date().toLocaleTimeString();  
        res.statusCode = 200;
        res.setHeader('Content-Type', 'text/plain');
        res.end(time); 
    }
    else if (req.url === '/date') {
        const date = new Date().toISOString().split('T')[0];  
        res.statusCode = 200;
        res.setHeader('Content-Type', 'text/plain');
        res.end(date);  
    }
    else {
        res.statusCode = 404;
        res.setHeader('Content-Type', 'text/plain');
        res.end('404: Page not found');
    }
});

server.listen(3000, () => {
    console.log('Server running at http://localhost:3000/');
});