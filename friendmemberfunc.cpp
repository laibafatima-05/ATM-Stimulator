#include <iostream>
using namespace std;

class Student; // Forward declaration

class Teacher
{
public:
    void showMarks(Student s);
};

class Student
{
private:
    int marks;

public:
    void setMarks(int m)
    {
        marks = m;
    }

    friend void Teacher::showMarks(Student s);
};

void Teacher::showMarks(Student s)
{
    cout << "Marks are: " << s.marks << endl;
}

int main()
{
    Student s1;

    s1.setMarks(90);

    Teacher t1;

    t1.showMarks(s1);

    return 0;
}