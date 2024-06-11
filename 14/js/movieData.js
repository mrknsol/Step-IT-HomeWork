const apiKey = 'e3344e22';

async function fetchMovieDetails() {
    const params = new URLSearchParams(window.location.search);
    const imdbID = params.get('imdbID');
    const response = await fetch(`https://www.omdbapi.com/?apikey=${apiKey}&i=${imdbID}`);
    const movie = await response.json();
    const movieDetails = document.getElementById('movieDetails');
    movieDetails.innerHTML = `
        <h1>${movie.Title}</h1>
        <img src="${movie.Poster}" alt="${movie.Title}">
        <p><strong>Plot:</strong> ${movie.Plot}</p>
        <p><strong>Director:</strong> ${movie.Director}</p>
        <p><strong>Actors:</strong> ${movie.Actors}</p>
        <p><strong>Year:</strong> ${movie.Year}</p>
        <p><strong>Genre:</strong> ${movie.Genre}</p>
        <p><strong>IMDB Rating:</strong> ${movie.imdbRating}</p>
    `;
}

function goBack() {
    window.history.back();
}

fetchMovieDetails();