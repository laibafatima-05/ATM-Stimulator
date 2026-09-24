#include <iostream>
using namespace std;

class Student
{
public:
    int age;
    void show()
    {
        cout << age << endl;
    }
};
int main()
{
    Student s;
    Student *ptr = &s;

    ptr->age = 20;
    ptr->show();

    return 0;
}