#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "A" << endl;
    }
};
class B
{
public:
    void show()
    {
        cout << "B" << endl;
    }
};
class C : public A, public B
{
};
int main()
{
    C obj;
    // obj.show(); // Ambiguity

    // Ambiguity Resolution
    obj.A::show();
    obj.B::show();

    return 0;
}
