import React, { useRef, useState, useEffect } from 'react';
import axios from 'axios';

function Movies() {
  const [movies, setMovies] = useState([]);
  const [totalPages, setTotalPages] = useState(1);
  const [currentPage, setCurrentPage] = useState(1);

  const searchInput = useRef();


  
  useEffect(() => {
    if (searchInput.current.value) {
      getMoviesByName(currentPage);
    }
  }, [currentPage]);

  const getMoviesByName = (page = 1) => {
    const options = {
      method: 'GET',
      url: 'https://api.themoviedb.org/3/search/movie',
      params: { query: searchInput.current.value, include_adult: 'false', language: 'en-US', page: page },
      headers: {
        accept: 'application/json',
        Authorization: 'Bearer eyJhbGciOiJIUzI1NiJ9.eyJhdWQiOiIyYTcxYWMxNTc3NzdkZTM3YzIxNTFjY2Q3OTQxZjU1YSIsIm5iZiI6MTcyMDUwMjA3MC45MjY0NDksInN1YiI6IjY1MzIyMzVkOWFjNTM1MDg3NzU2MGEzYyIsInNjb3BlcyI6WyJhcGlfcmVhZCJdLCJ2ZXJzaW9uIjoxfQ.mqkmoezVNNZ1BkrxKOEfaIPS6H6JNYxxH6ifM-bvuA8'
      }
    };

    axios
      .request(options)
      .then(function (response) {
        setMovies(response.data.results);
        setTotalPages(response.data.total_pages);
      })
      .catch(function (error) {
        console.error(error);
      });
  };

  const searchButton = () => {
    setCurrentPage(1); 
    getMoviesByName(1);
  };

  const pageChangeButton = (page) => {
    setCurrentPage(page);
  };

  return (
    <div>
      <div className="flex justify-center items-center h-screen">
        <div className="flex flex-col w-96">
          <input
            ref={searchInput}
            type="text"
            placeholder="Search for movies"
            className="px-4 py-2 border border-gray-300 rounded-md"
          />
          <button onClick={searchButton} className="bg-blue-500 text-white px-4 py-2 mt-2 rounded-md">
            Search
          </button>
        </div>
      </div>

      <div className="grid grid-cols-4 gap-4">
        {movies.map((movie) => (
          <div key={movie.id} className="bg-gray-200 p-4 rounded-md">
            <img
              src={`https://image.tmdb.org/t/p/w500/${movie.poster_path}`}
              alt={movie.title}
              className="rounded-md"
            />
            <h2 className="text-lg font-bold mt-2">{movie.title}</h2>
          </div>
        ))}
      </div>

      {/* Pagination */}
      {movies.length > 0 && (
        <div className="flex justify-center items-center mt-4">
          <button
            onClick={() => pageChangeButton(currentPage - 1)}
            className="bg-blue-500 text-white px-4 py-2 rounded-md"
            disabled={currentPage === 1}
          >
            Previous
          </button>
          {[...Array(totalPages)].map((_, index) => (
            <button
              key={index}
              onClick={() => pageChangeButton(index + 1)}
              className={`bg-blue-500 text-white px-4 py-2 ml-4 rounded-md ${currentPage === index + 1 ? 'bg-blue-700' : ''}`}
            >
              {index + 1}
            </button>
          ))}
          <button
            onClick={() => pageChangeButton(currentPage + 1)}
            className="bg-blue-500 text-white px-4 py-2 ml-4 rounded-md"
            disabled={currentPage === totalPages}
          >
            Next

            
          </button>
        </div>
      )}
    </div>
  );
}

export default Movies;
