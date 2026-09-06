#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;

    while (true)
    {
        cout << "Enter a number: ";
        cin >> num;

        if (num < 0)
        {
            break;
        }
        sum = sum + num;
    }
    cout << "Sum = " << sum;
    return 0;
}