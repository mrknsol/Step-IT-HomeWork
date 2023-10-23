using System;
using System.Collections.Generic;
using System.DirectoryServices;
using System.Net.Http;
using System.Threading.Tasks;
using Newtonsoft.Json;

namespace ImdbMovieSearch
{
    public class Movie
    {
        public string Title { get; set; }
        public string Year { get; set; }
        public string MovieType { get; set; }
        public string PosterUrl { get; set; }
    }

    public class ImdbApiHelper
    {
        private readonly string apiKey;
        private const string ApiBaseUrl = "https://api.themoviedb.org/3";
        private const string ImageBaseUrl = "https://image.tmdb.org/t/p/w500";

        public ImdbApiHelper(string apiKey)
        {
            this.apiKey = apiKey;
        }

        public async Task<string> GetImdbIdFromTMDbApi(string movieTitle)
        {
            using (var httpClient = new HttpClient())
            {
                string searchUrl = $"{ApiBaseUrl}/search/movie?api_key={apiKey}&query={Uri.EscapeDataString(movieTitle)}";

                HttpResponseMessage searchResponse = await httpClient.GetAsync(searchUrl);

                if (searchResponse.IsSuccessStatusCode)
                {
                    string searchResult = await searchResponse.Content.ReadAsStringAsync();
                    var searchData = JsonConvert.DeserializeObject<SearchResult>(searchResult);

                    if (searchData.results != null && searchData.results.Count > 0)
                    {
                        var movie = searchData.results[0];
                        return movie.id?.ToString();
                    }
                }

                return null;
            }
        }

        public async Task<List<Movie>> SearchMoviesAsync(string query)
        {
            using (var httpClient = new HttpClient())
            {
                string searchUrl = $"{ApiBaseUrl}/search/multi?api_key={apiKey}&query={Uri.EscapeDataString(query)}";

                HttpResponseMessage searchResponse = await httpClient.GetAsync(searchUrl);

                if (searchResponse.IsSuccessStatusCode)
                {
                    string searchResult = await searchResponse.Content.ReadAsStringAsync();
                    var searchData = JsonConvert.DeserializeObject<SearchResult>(searchResult);

                    if (searchData.results != null)
                    {
                        var movies = new List<Movie>();                 

                        foreach (var result in searchData.results)
                        {
                            string movieType = result.media_type == "tv" ? "TV Show" : "Movie";

                            movies.Add(new Movie
                            {
                                Title = result.title,
                                Year = result.release_date,
                                MovieType = movieType,
                                PosterUrl = result.poster_path != null ? $"{ImageBaseUrl}/{result.poster_path}" : null
                            });
                        }

                        return movies;
                    }
                }

                return null;
            }
        }

        public class SearchResult
        {
            public List<MovieResult> results { get; set; }
        }

        public class MovieResult
        {
            public string title { get; set; }
            public string release_date { get; set; }
            public string media_type { get; set; }
            public string poster_path { get; set; }
            public int? id { get; set; }
        }
    }
}
