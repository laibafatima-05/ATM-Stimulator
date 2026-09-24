#include <iostream>
using namespace std;

// Recursions in C++
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    {
        return n * factorial(n - 1); // Recursive Function
    }
}
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Factorial = " << factorial(number);
    return 0;
}