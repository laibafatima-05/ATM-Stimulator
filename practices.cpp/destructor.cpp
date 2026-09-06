#include <iostream>
using namespace std;

class Student
{
public:
    Student() // Constructor
    {
        cout << "Constructor called" << endl;
    }
    ~Student() // Destructor
    {
        cout << "Destructor called" << endl;
    }
};
int main()
{
    Student s1;
    {
        Student s2;
        Student s3;
    }
    cout << "Back to main" << endl;

    return 0;
}