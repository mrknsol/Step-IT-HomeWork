const styles = [
    { name: 'color', value: 'black' },
    { name: 'font-size', value: '24px' },
    { name: 'text-align', value: 'center' },
    { name: 'font-family', value: 'Arial, sans-serif' },
    { name: 'background-color', value: '#f0f8ff' },
    { name: 'padding', value: '10px' },
    { name: 'border-radius', value: '8px' },
    { name: 'box-shadow', value: '0 4px 8px rgba(0, 0, 0, 0.2)' },
    { name: 'margin', value: '10px 0' } 
];

function applyStyles(styles, text) {
    let styleString = styles.map(style => `${style.name}: ${style.value}`).join('; ');

    document.write(`<p style="${styleString}">${text}</p>`);
}

applyStyles(styles, 'Müəllim!');
applyStyles(styles, 'Поставьте 12)');
