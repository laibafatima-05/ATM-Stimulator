#include <iostream>
using namespace std;

class Student
{
    int age;

public:
    Student(int a = 18) // Default Argument
    {
        age = a;
    }
    void show()
    {
        cout << "Age = " << age << endl;
    }
};
int main()
{
    Student s1;
    s1.show();

    Student s2(20);
    s2.show();

    return 0;
}