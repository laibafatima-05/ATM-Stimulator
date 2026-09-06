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
    void totalMarks(Student s1, Student s2)
    {
        marks = s1.marks + s2.marks;
    }
    void showMarks()
    {
        cout << "Marks: " << marks << endl;
    }
};
int main()
{
    Student s1, s2, s3;

    s1.setMarks(70);
    s2.setMarks(80);

    s1.showMarks();
    s2.showMarks();

    s3.totalMarks(s1, s2);
    s3.showMarks();

    return 0;
}