#include <iostream>
using namespace std;

void byValue(string x)
{
    x = "Ali";
}

void byReference(string &x)
{
    x = "Ali";
}

int main()
{
    string a = "Ayesha";
    string b = "Ayesha";

    byValue(a);
    byReference(b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}