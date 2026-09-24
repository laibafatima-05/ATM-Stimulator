#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main()
{
    Student s[3];

    s[0].name = "Ali";
    s[0].age = 18;

    s[1].name = "Ayesha";
    s[1].age = 19;

    s[2].name = "Dua";
    s[2].age = 20;

    Student *ptr = s;
    for (int i = 0; i < 3; i++)
    {
        ptr->display();
        ptr++;
    }
    return 0;
}