using System;
using System.Net.Http;
using System.Threading.Tasks;

namespace ApiProject
{
    class Program
    {
        static async Task Main(string[] args)
        {
            using var httpClient = new HttpClient();

            var googleBooksAPI = new GoogleBooksAPI(httpClient);
            var openLibraryAPI = new OpenLibraryAPI(httpClient);
            var goodreadsAPI = new GoodreadsAPI(httpClient);

            var bookService = new BookService(googleBooksAPI, openLibraryAPI, goodreadsAPI);

            Console.Write("Enter Book Name: ");
            string query = Console.ReadLine();

            BookModel bookInfo = await bookService.SearchBook(query);

            if (bookInfo != null)
            {
                Console.WriteLine($"Information About {query}:");
                Console.WriteLine($"Name: {bookInfo.Title}");
                Console.WriteLine($"Autor: {bookInfo.Author}");
                Console.WriteLine($"Year: {bookInfo.Year}");

                ReviewModel review = await goodreadsAPI.GetBookReviews(bookInfo.Title);
                if (review != null)
                {
                    Console.WriteLine($"\nReviews about {query}:");
                    Console.WriteLine($"Raiting: {review.Rating}");
                    Console.WriteLine($"Review: {review.ReviewText}");
                }
                else
                {
                    Console.WriteLine("\nReview can't found");
                }
            }
            else
            {
                Console.WriteLine("Book not found.");
            }
        }
    }
}
