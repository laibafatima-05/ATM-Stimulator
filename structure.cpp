#include <iostream>
using namespace std;

struct student
{
    int rollNo;
    char grade;
    float marks;
};

int main()
{
    struct student ali;
    ali.rollNo = 10;
    ali.grade = 'A';
    ali.marks = 89.5;

    cout << "Roll No: " << ali.rollNo << endl;
    cout << "Grade: " << ali.grade << endl;
    cout << "Marks: " << ali.marks << endl;

    return 0;
}