#include <iostream>
using namespace std;

class A
{
public:
    int a;
    void showA()
    {
        cout << "A = " << a << endl;
    }
};
class B : virtual public A
{
public:
    int b;
    void showB()
    {
        cout << "B = " << b << endl;
    }
};
class C : virtual public A
{
public:
    int c;
    void showC()
    {
        cout << "C = " << c << endl;
    }
};
class D : public B, public C
{
public:
    int d;
    void showD()
    {
        cout << "D = " << d << endl;
    }
};
int main()
{
    D obj;

    obj.a = 10;
    obj.b = 20;
    obj.c = 30;
    obj.d = 40;

    obj.showA();
    obj.showB();
    obj.showC();
    obj.showD();

    return 0;
}