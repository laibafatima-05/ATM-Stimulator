#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A(int a) : x(a)
    {
        cout << "A= " << x << endl;
    }
};
class B : public A
{
    int y;

public:
    B(int a, int b) : A(a), y(b)
    {
        cout << "B= " << y << endl;
    }
};
int main()
{
    B obj(10, 20);

    return 0;
}