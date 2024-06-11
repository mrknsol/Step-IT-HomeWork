const apiKey = 'e3344e22';

document.addEventListener('DOMContentLoaded', () => {
    const searchInput = localStorage.getItem('searchInput');
    const typeSelect = localStorage.getItem('typeSelect');
    const totalResults = localStorage.getItem('totalResults');

    if (searchInput && typeSelect && totalResults) {
        document.getElementById('searchInput').value = searchInput;
        document.getElementById('typeSelect').value = typeSelect;
        searchMovies();
    }
});

async function searchMovies() {
    const searchInput = document.getElementById('searchInput').value;
    const typeSelect = document.getElementById('typeSelect').value;
    const response = await fetch(`http://www.omdbapi.com/?apikey=${apiKey}&s=${searchInput}&type=${typeSelect}`);
    const data = await response.json();
    const movies = data.Search || [];
    const totalResults = data.totalResults || 0;

    displayMovies(movies);
    displayPagination(totalResults);
}

function displayMovies(movies) {
    const moviesContainer = document.getElementById('moviesContainer');
    moviesContainer.innerHTML = '';
    movies.forEach(movie => {
        const movieDiv = document.createElement('div');
        movieDiv.classList.add('movie');
        movieDiv.innerHTML = `
            <img src="${movie.Poster}" alt="${movie.Title}">
            <h3 class="movie-title">${movie.Title}</h3>
            <button class="details-button" onclick="showDetails('${movie.imdbID}')">Details</button>
        `;
        moviesContainer.appendChild(movieDiv);
    });
}

function displayPagination(totalResults) {
    const pagination = document.getElementById('pagination');
    pagination.innerHTML = '';
    const totalPages = Math.ceil(totalResults / 10);
    for (let i = 1; i <= totalPages; i++) {
        const button = document.createElement('button');
        button.textContent = i;
        button.classList.add('pagination-button');
        button.addEventListener('click', () => fetchMoviesByPage(i));
        pagination.appendChild(button);
    }
}

async function fetchMoviesByPage(page) {
    const searchInput = document.getElementById('searchInput').value;
    const typeSelect = document.getElementById('typeSelect').value;
    const response = await fetch(`https://www.omdbapi.com/?apikey=${apiKey}&s=${searchInput}&type=${typeSelect}&page=${page}`);
    const data = await response.json();
    const movies = data.Search || [];

    displayMovies(movies);
}

function showDetails(imdbID) {
    window.location.href = `../html/movieData.html?imdbID=${imdbID}`;
}