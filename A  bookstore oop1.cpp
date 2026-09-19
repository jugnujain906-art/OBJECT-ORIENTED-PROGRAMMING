#include<iostream>
using namespace std;

class book{
    public:
    string name = "c++";
    string author = "bjarne";
    int id = 101;
    float price = 2000;

    void display()
    {
        cout << " book name:" << name << endl;

        cout << " book author:" << author << endl;

        cout << " book id:" << id << endl;

        cout << " book price:" << price << endl;

    }
};

int main()
{
    book b1;
    b1.display();

    return 0;
}