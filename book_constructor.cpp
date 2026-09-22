#include <iostream>
#include <string>
using namespace std;

class book
{
public:
    string book_name;
    string book_author;
    int bookID;
    float book_price;

    // Default Constructor
    book()
    {
        book_name = "C++";
        book_author = "Bjarne Stroustrup";
        bookID = 111;
        book_price = 500;
    }

    // Parameterized Constructor
    book(string name, string author, int id, float price)
    {
        book_name = name;
        book_author = author;
        bookID = id;
        book_price = price;
    }

    void display()
    {
        cout << "---------- BOOK STORE ----------" << endl;
        cout << "Book ID: " << bookID << endl;
        cout << "Book Name: " << book_name << endl;
        cout << "Book Author: " << book_author << endl;
        cout << "Book Price: " << book_price << endl;
    }
};

int main()
{
    // Default details
    book b1;

    // Complete information
    book b2("Python", "sst", 222, 600);

    cout << "Default Book:" << endl;
    b1.display();

    cout << endl;

    cout << "Complete Information Book:" << endl;
    b2.display();

    return 0;
}