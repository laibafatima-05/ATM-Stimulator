#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    Number(int v) : value(v) {}

    Number operator+(const Number &n)
    {
        return Number(value + n.value);
    }

    void display()
    {
        cout << value;
    }
};

int main()
{
    Number n1(5), n2(10);

    Number n3 = n1 + n2;

    n3.display();

    return 0;
}