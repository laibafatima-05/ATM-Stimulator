#include <iostream>
using namespace std;

class Student
{
    int a, b;
public:
    Student() // Default Constructors
    {
        a = 0;
        b = 0;
    }
    Student(int x, int y) // 2 Parameterized Conductor
    {
        a = x;
        b = y;
    }
    Student(int x) // 1 Parameterized Conductor
    {
        a = x;
        b = 0;
    }
    void show()
    {
        cout << "a + b = " << a + b << endl;
    }
};

int main()
{
    Student s1;
    s1.show();

    Student s2(5, 10);
    s2.show();

    Student s3(5);
    s3.show();

    return 0;
}