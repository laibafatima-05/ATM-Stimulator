#include <iostream>
using namespace std;

int main()
{
    int temp;

    cout << "Enter temperature:";
    cin >> temp;
    if (temp > 30)
    {
        cout << "Hot";
    }
    else if (temp >= 20 && temp <= 30)
    {
        cout << "Normal";
    }
    else if (temp < 20)
    {
        cout << "Cold";
    }
}