#include <iostream>
using namespace std;

struct Books
{
	char* name;
	char* author;
	char* publishing;

	void print()
	{
		cout
			<< name << endl
			<< author << endl
			<< publishing << endl;
	}

	void edit()
	{
		int select{};
		cout
			<< "Enter select change" << endl
			<< "1: Name" << endl
			<< "2: Author" << endl
			<< "3: Publishing" << endl
			<< "4: All" << endl;
		cin >> select;
		getchar();

		switch (select)
		{
		case 1:
			cout << "Enter name: ";
			cin.getline(name, 40);
			break;
		case 2:
			cout << "Enter author: ";
			cin.getline(author, 40);
		case 3:
			cout << "Enter publishing: ";
			cin.getline(publishing, 40);
		case 4:
			cout << "Enter name: ";
			cin.getline(name, 40);

			cout << "Enter author: ";
			cin.getline(author, 40);

			cout << "Enter publishing: ";
			cin.getline(publishing, 40);
		default:
			break;
		}
	}
};


void printBook(Books** books)
{
	for (size_t i = 0; books[i] != nullptr; i++)
	{
		cout << "Book number #" << i + 1 << ":" << endl;
		books[i]->print();
	}
}

Books* createBook(int count)
{
	Books* book = new Books;

	book->name = new char[41];
	book->author = new char[41];
	book->publishing = new char[41];

	cout << "Enter name: ";
	cin.getline(book->name, 40);

	cout << "Enter author: ";
	cin.getline(book->author, 40);

	cout << "Enter publishing: ";
	cin.getline(book->publishing, 40);

	cout << "Book Added!!" << endl;

	return book;
}

void searchBookName(Books** books)
{
	char search[11]{};
	int len{};

	cout << "Enter name of book: "; cin.getline(search, 10);

	while (search[len] != '\0')
		len++;

	for (size_t i = 0; books[i] != nullptr; i++)
	{
		int yes{};
		for (size_t j = 0; j < len; j++)
		{
			if (books[i]->name[j] == search[j])
				yes++;
		}
		if (yes == len)
			cout << "Book number: " << i + 1 << endl;
	}
}

void searchBookAuthor(Books** books)
{
	char search[11]{};
	int length{};

	cout << "Enter author of book: "; cin.getline(search, 10);

	while (search[length] != '\0')
		length++;

	for (size_t i = 0; books[i] != nullptr; i++)
	{
		int ccount{};
		for (size_t j = 0; j < length; j++)
		{
			if (books[i]->author[j] == search[j])
				ccount++;
		}
		if (ccount == length)
			cout << "Book number: " << i + 1;
	}
}

void sortName(Books** books)
{
	for (size_t i = 0; books[i] != nullptr; i++)
	{
		for (size_t j = 0; books[j] != nullptr; j++)
		{
			if ((int)books[i]->name[0] < (int)books[j]->name[0])
			{
				char* tmp = books[i]->name;
				books[i]->name = books[j]->name;
				books[j]->name = tmp;
				tmp = books[i]->author;
				books[i]->author = books[j]->author;
				books[j]->author = tmp;
				tmp = books[i]->publishing;
				books[i]->publishing = books[j]->publishing;
				books[j]->publishing = tmp;
			}
		}
	}
	printBook(books);
}

void sortAuthor(Books** books)
{
	for (size_t i = 0; books[i] != nullptr; i++)
	{
		for (size_t j = 0; books[j] != nullptr; j++)
		{
			if ((int)books[i]->author[0] < (int)books[j]->author[0])
			{
				char* tmp = books[i]->name;
				books[i]->name = books[j]->name;
				books[j]->name = tmp;
				tmp = books[i]->author;
				books[i]->author = books[j]->author;
				books[j]->author = tmp;
				tmp = books[i]->publishing;
				books[i]->publishing = books[j]->publishing;
				books[j]->publishing = tmp;
			}
		}
	}
	printBook(books);
}

void sortPublishing(Books** books)
{
	for (size_t i = 0; books[i] != nullptr; i++)
	{
		for (size_t j = 0; books[j] != nullptr; j++)
		{
			if ((int)books[i]->publishing[0] < (int)books[j]->publishing[0])
			{
				char* tmp = books[i]->name;
				books[i]->name = books[j]->name;
				books[j]->name = tmp;
				tmp = books[i]->author;
				books[i]->author = books[j]->author;
				books[j]->author = tmp;
				tmp = books[i]->publishing;
				books[i]->publishing = books[j]->publishing;
				books[j]->publishing = tmp;
			}
		}
	}
	printBook(books);
}


int main()
{
	int count{};
	cout << "Enter Count of Books: "; cin >> count;
	getchar();

	Books** books = new Books* [30] {};

	for (size_t i = 0; i < count; i++)
	{
		books[i] = createBook(count);
	}
	bool stop = true;
	while (stop)
	{
		int choice{};
		cout
			<< "Enter your choice: " << endl
			<< "1. For editing book" << endl
			<< "2. For printing books" << endl
			<< "3. For search book by name" << endl
			<< "4. For search books by author" << endl
			<< "5. For sorting the array by book title" << endl
			<< "6. For sorting the array by book author" << endl
			<< "7. For sorting the array by book publishing" << endl
			<< "8. For exit programm" << endl 
			<< "enter: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			system("cls");
			printBook(books);
			cout << "Choice of book: "; cin >> choice;
			books[choice - 1]->edit();
			break;
		case 2:
			system("cls");
			printBook(books);
			break;
		case 3:
			system("cls");
			getchar();
			searchBookName(books);
			break;
		case 4:
			system("cls");
			getchar();
			searchBookAuthor(books);
			break;
		case 5:
			system("cls");
			getchar();
			sortName(books);
			break;
		case 6:
			system("cls");
			getchar();
			sortAuthor(books);
			break;
		case 7:
			system("cls");
			getchar();
			sortPublishing(books);
			break;
		case 8:
			cout << "Bye Bye!!";
			break;
		default:
			break;
		}
	}

	return 0;
}