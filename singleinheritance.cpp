#include <iostream>
using namespace std;

class A
{
public:
    void showA()
    {
        cout << "A" << endl;
    }
};
class B : public A
{
public:
    void showB()
    {
        cout << "B" << endl;
    }
};
int main()
{
    B obj;

    obj.showA();
    obj.showB();

    return 0;
}