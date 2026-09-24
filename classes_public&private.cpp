#include <iostream>
using namespace std;

class student
{
private:
    int rollNo;
    int marks;

public:
    string name;
    void setData(int r, int m)
    {
        rollNo = r;
        marks = m;
    }
    void getData()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
        cout << "Name: " << name << endl;
    }
};
int main()
{
    student s1;

    s1.name = "Ali";
    s1.setData(101, 85);
    s1.getData();
    return 0;
}