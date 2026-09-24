#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    Number(int v) : value(v) {}

    void operator++()
    {
        ++value;
    }

    void display()
    {
        cout << value;
    }
};

int main()
{
    Number n(5);

    ++n;
    n.display();

    return 0;
}