const openModalButton = document.getElementById('openModal');
const closeModalButton = document.getElementById('closeModal');
const modal = document.getElementById('modal');

openModalButton.addEventListener('click', function () {
    modal.style.display = 'flex'; 
});

closeModalButton.addEventListener('click', function () {
    modal.style.display = 'none';
});