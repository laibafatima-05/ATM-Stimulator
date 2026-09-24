#include <iostream>
using namespace std;

int subtract(int a, int b); // Function Prototype

int main()
{
    int num1, num2;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    cout << "The subtraction is " << subtract(num1, num2);
    return 0;
}
int subtract(int a, int b)
{
    int c = a - b;
    return c;
}