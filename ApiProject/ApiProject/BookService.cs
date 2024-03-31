using System;
using System.Threading.Tasks;

namespace ApiProject
{
    public class BookService
    {
        private readonly IGoogleBooksAPI _googleBooksAPI;
        private readonly IOpenLibraryAPI _openLibraryAPI;
        private readonly IGoodreadsAPI _goodreadsAPI;

        public BookService(IGoogleBooksAPI googleBooksAPI, IOpenLibraryAPI openLibraryAPI, IGoodreadsAPI goodreadsAPI)
        {
            _googleBooksAPI = googleBooksAPI ?? throw new ArgumentNullException(nameof(googleBooksAPI));
            _openLibraryAPI = openLibraryAPI ?? throw new ArgumentNullException(nameof(openLibraryAPI));
            _goodreadsAPI = goodreadsAPI ?? throw new ArgumentNullException(nameof(goodreadsAPI));
        }

        public async Task<BookModel> SearchBook(string query)
        {
            return await _googleBooksAPI.SearchBook(query);
        }
    }
}
