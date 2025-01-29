const fs = require('fs'); 

const readFile = (filePath) => {
    return new Promise((resolve, reject) => {
        fs.readFile(filePath, 'utf8', (err, data) => {
            if (err) {
                reject('File not found');
            } else {
                resolve(data); 
            }
        });
    });
};

const writeFile = (filePath, content) => {
    return new Promise((resolve, reject) => {
        fs.writeFile(filePath, content, (err) => {
            if (err) {
                reject('Error writing to file'); 
            } else {
                resolve('File updated successfully');  
            }
        });
    });
};

module.exports = { readFile, writeFile };