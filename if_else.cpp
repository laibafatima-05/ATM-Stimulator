#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << " Enter your age: ";
    cout << " Selection-control Structure: If-else if-else Statement";
    cin >> age;
    if (age < 13)
    {
        cout << "Child";
    }
    else if (age < 20)
    {
        cout << "Teenager";
    }
    else if (age < 60)
    {
        cout << "Adult";
    }
    else
    {
        cout << "Senior Citizen";
    }

    cout << " Selection-control Structure: Switch Case Statements";
    switch (age)
    {
    case 15:
        cout << " I'm 15 " << endl;
        break;
    case 20:
        cout << " I'm 20 " << endl;
        break;

    default:
        cout << " No special cases " << endl;
        break;
    }

    return 0;
}