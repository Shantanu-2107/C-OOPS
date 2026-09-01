#include <iostream>
using namespace std;

class Book
{
public:
    char bookTitle;
    int bookId;
    double bookPrice;
    char bookName;


void display(Book& book)
{
    cout << "Book Title: " << endl;
    cin >> bookTitle;
    cout << "Book ID: " << endl;
    cin >> bookId;
    cout << "Book Price: " << endl;
    cin >> bookPrice;
    cout << "Book Name: " << endl;
    cin >> bookName;
}
};

int main()
{
    Book b1;
    b1.bookTitle = "C++ Programming";
    b1.bookId = 101;
    b1.bookPrice = 29.99;
    b1.bookName = "John Doe";

    display(b1);

    return 0;
}
