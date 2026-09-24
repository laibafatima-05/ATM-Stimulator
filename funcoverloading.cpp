#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};
int main()
{
    Calculator obj;
    int a, b, c;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    cout << "Sum of two numbers: " << obj.add(a, b) << endl;
    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c;
    cout << "Sum of three numbers: " << obj.add(a, b, c) << endl;
    return 0;
}