#include <iostream>
using namespace std;

class Student
{
    int marks;

public:
    void setMarks(int m)
    {
        marks = m;
    }
    void showMarks()
    {
        cout << "Marks: " << marks << endl;
    }
    friend int totalMarks(Student s1, Student s2);
};
int totalMarks(Student s1, Student s2)
{
    return s1.marks + s2.marks;
}
int main()
{
    Student s1, s2;

    s1.setMarks(75);
    s2.setMarks(95);

    s1.showMarks();
    s2.showMarks();

    int total = totalMarks(s1, s2);
    cout << "Total Marks: " << total << endl;
    return 0;
}
