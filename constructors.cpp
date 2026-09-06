#include <iostream>
using namespace std;

class Student
{
    int age;
    int marks;

public:
    Student(); // Constructor Declaration
    void showData()
    {
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};
Student::Student()
{
    age = 18;
    marks = 90;
}
int main()
{
    Student s1;
    s1.showData();
    return 0;
}