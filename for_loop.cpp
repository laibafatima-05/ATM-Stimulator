#include <iostream>
using namespace std;

int main()
{
    int n;
    int even = 0;
    int odd = 0;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "Even numbers = " << even << endl;
    cout << "Odd numbers = " << odd << endl;
    return 0;
}