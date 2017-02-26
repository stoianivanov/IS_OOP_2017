#include <iostream>
#include <cstring>
using namespace std;


struct Book
{
	char title[20];
	char authorName[20];
	char genre[20];
	char ISBN[20];
	int pages;
	float price;
};

void initBook(Book& book, char* title, char* authorNmae, char* genre, char* ISBN, int pages, float price)
{
	strcpy(book.title, title);//if you use VS, you should use strcpy_s
	strcpy(book.authorName, authorNmae);
	strcpy(book.genre, genre);
	strcpy(book.ISBN, ISBN);
	book.pages = pages;
	book.price = price;

}
void print(const Book& b)
{
    cout << b.title << "  "<< b.authorName<< "  " << b.genre<< "  " << b.ISBN << "  "<< b.pages << "  " << b.price;
}
bool compareBookbyAuthor(Book first, Book second)
{
	return strcmp(first.authorName, second.authorName) ==  0 ?true: false;
}

float priceOfBooks(Book* books, size_t size)
{
	float currentPrice = 0;
	for(size_t i = 0 ; i < size; ++i)
	{
		currentPrice += books[i].price;
	}
	return currentPrice;
}

Book cheapestBook(Book* books, size_t size)
{
	Book* cheapestBook = &books[0];
	for(size_t i = 1; i < size; ++i)
	{
		if(cheapestBook -> price > books[i].price)
		{
			cheapestBook = &books[i];
		}
	}
	return *cheapestBook;
}

int booksFromGenre(Book* books, size_t size, char* genre)
{
	int counter = 0;

	for(size_t i = 0; i < size; ++i)
	{
		if(strcmp(books[i].genre, genre) == 0)
		{
			++counter;
		}
	}
	return counter;
}
Book  largestBook(Book* books, size_t size)
{
	Book* largestBook = &books[0];
	for(size_t i = 1; i < size; ++i)
	{
		if(largestBook -> pages > books[i].pages)
		{
			largestBook = &books[i];
		}
	}
	return *largestBook;
}
int  findBookbyISBN(Book* books, size_t size, char* ISBN)
{
	for(size_t i = 0; i < size; ++i)
	{
		if(strcmp(books[i].ISBN, ISBN) == 0)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
    Book b1,b2,b3;
    initBook(b1,"Kniga 1", "Stoyan", "trilar","123abc123", 1000, 20.40);
    initBook(b2,"Kniga 2", "Stoqn", "ekshan","123addc123", 1000, 10.40);
    initBook(b3,"Kniga 3", "Stoian", "komedia","12311123", 1000, 200.40);
    Book* books = new Book[3];
    books[0] = b1;
    books[1] = b2;
    books[2] = b3;
    print(b1);
    cout<< "Cheapest books is :" ;
    print(cheapestBook(books,3));
    cout<< endl;
    cout << priceOfBooks(books,3);
    cout<< endl;
    cout << booksFromGenre(books, 3, "ekshan");
    cout<< endl;
    print(largestBook(books,3));
    cout<< endl;
    cout << findBookbyISBN(books, 3, "123abc123");
    return 0;
}
