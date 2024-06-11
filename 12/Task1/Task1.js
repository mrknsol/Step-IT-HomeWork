document.getElementById('username').addEventListener('input', function (event) {
    const inputField = event.target;
    const value = inputField.value;
    const filteredValue = value.replace(/\d/g, '');
    if (value !== filteredValue) {
        inputField.value = filteredValue;
    }
});