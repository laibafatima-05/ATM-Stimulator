#include <iostream>
using namespace std;

class Student
{
private:
    int marks = 90;

    friend class Teacher;
};

class Teacher
{
public:
    void showMarks(Student s)
    {
        cout << "Student Marks = " << s.marks;
    }
};

int main()
{
    Student s;
    Teacher t;

    t.showMarks(s);

    return 0;
}