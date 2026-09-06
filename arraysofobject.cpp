#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    int marks;

public:
    void setData()
    {
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter marks: ";
        cin >> marks;
    }
    void getData()
    {
        cout << "Roll number is: " << rollNo << endl;
        cout << "Marks are: " << marks << endl;
    }
};
int main()
{
    Student s[3];
    for (int i = 0; i < 3; i++)
    {
        s[i].setData();
        s[i].getData();
    }
    return 0;
}