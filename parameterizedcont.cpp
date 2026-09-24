#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    int price;

public:
    Book(string t, int p) // Parameterized Constructors
    {
        title = t;
        price = p;
    }
    void display()
    {
        cout << "Book Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};
int main()
{
    Book b1("C++ Programming", 500);
    b1.display();
    return 0;
}