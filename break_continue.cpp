#include <iostream>
using namespace std;

int main()
{
    // cout << "Break Example:" << endl;
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << i << endl;
    //     if (i == 5)
    //     {
    //         break;
    //     }
    // }

    cout << "Continue Example:" << endl;
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}
