#include <iostream>
using namespace std;

class Animal
{
public:
    void sound()
    {
        cout << "Animal makes a sound";
    }
};
class Cat : public Animal
{
public:
    void sound()
    {
        cout << "Cat meows";
    }
};
int main()
{
    Cat c;
    c.sound();

    return 0;
}