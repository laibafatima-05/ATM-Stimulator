#include <iostream>
using namespace std;

int main()
{
    // Array in C++
    int numbers[5] = {10, 20, 30, 40, 50};
    cout << numbers[0] << endl;
    cout << numbers[1] << endl;
    cout << numbers[2] << endl;
    cout << numbers[3] << endl;
    cout << numbers[4] << endl;

    numbers[3] = 35;
    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << endl;
    }

    // Pointers and Arrays
    // int *p = numbers;
    // cout << "The value of *p is: " << *p << endl;
    // cout << "The value of *(p + 1) is: " << *(p + 1) << endl;
    // cout << "The value of *(p + 2) is: " << *(p + 2) << endl;
    // cout << "The value of *(p + 3) is: " << *(p + 3) << endl;
    // cout << "The value of *(p + 4) is: " << *(p + 4) << endl;

    return 0;
}