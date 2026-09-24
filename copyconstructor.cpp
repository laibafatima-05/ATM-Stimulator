#include <iostream>
using namespace std;

class Student
{
    int marks;

public:
    // Default Constructor
    Student()
    {
        marks = 0;
    }
    // Parameterized Constructor
    Student(int m)
    {
        marks = m;
    }
    // Copy Constructor
    Student(Student &obj)
    {
        cout << "Copy constructor called!" << endl;
        marks = obj.marks;
    }
    void display()
    {
        cout << "Marks= " << marks << endl;
    }
};
int main()
{
    Student s1(90);
    s1.display();

    Student s2(s1);
    s2.display();

    return 0;
}