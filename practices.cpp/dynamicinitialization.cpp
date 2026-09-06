#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;

public:
    Student(string n, int a)
    {
        name = n;
        age = a;
    }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main()
{
    string n;
    int a;
    cout << "Enter name: ";
    cin >> n;
    cout << "Enter age: ";
    cin >> a;
    Student s1(n, a);
    s1.show();

    return 0;
}