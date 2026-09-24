#include <iostream>
using namespace std;

int main()
{
    // Pointers in C++
    int x = 5;
    int* y = &x;

    cout << "The address of x is: " << &x << endl;
    cout << "The value at address y is: " << *y << endl;

    // Pointer To Pointer
    int **c = &y;
    cout << "The address of y is: " << &y << endl;
    cout << "The value at address c is: " << *c << endl;
    cout << "The value of value at address c is: " << **c << endl;

    return 0;
}