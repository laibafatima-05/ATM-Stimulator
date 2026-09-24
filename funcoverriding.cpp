#include <iostream>
using namespace std;

class Parent
{
public:
    virtual void show()
    {
        cout << "This is Parent class" << endl;
    }
};
class Child : public Parent
{
public:
    void show() override
    {
        cout << "This is Child class" << endl;
    }
};
int main()
{
    Child obj;
    obj.show();

    return 0;
}