using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ApiProject
{
    public interface IGoogleBooksAPI
    {
        Task<BookModel> SearchBook(string query);
    }
}
