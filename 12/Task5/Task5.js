const bookList = document.getElementById('bookList');
const books = bookList.getElementsByTagName('li');

for (let book of books) {
    book.addEventListener('click', function() {
        for (let book of books) {
            book.classList.remove('selected');
        }
        
        this.classList.add('selected');
    });
}