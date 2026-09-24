#include <iostream>
using namespace std;

class Calculator
{
    int a, b;

public:
    void input(void)
    {
        cout << "Enter first number: " << endl;
        cin >> a;
        cout << "Enter second number: " << endl;
        cin >> b;
        sum();
    }
    void sum(void)
    {
        cout << "Sum = " << a + b << endl;
    }
};

int main()
{
    Calculator c;
    c.input();
    return 0;
}