#include <iostream>
using namespace std;

class Person
{
protected:
    int age;

private:
    int id;
};
class Teacher : protected Person
{
public:
    void setAge()
    {
        age = 20;
    }
    void display()
    {
        cout << "Age: " << age << endl;
    }
};
int main()
{
    Teacher t;

    t.setAge();
    t.display();

    // cout << t.age;  //will not work bcz age is protected

    return 0;
}