const lights = document.querySelectorAll('.light');
const changeButton = document.getElementById('changeButton');
let currentLightIndex = 0;

function toggleLight() {
    lights[currentLightIndex].classList.remove('active');
    currentLightIndex = (currentLightIndex + 1) % lights.length;
    lights[currentLightIndex].classList.add('active');
}

changeButton.addEventListener('click', toggleLight);