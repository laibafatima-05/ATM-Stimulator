#include <iostream>
using namespace std;

class student
{
    static int count;

public:
    static void showCount()
    {
        cout << "Total Students: " << count << endl;
    }
};
int student::count = 5;
int main()
{
    student::showCount();
    return 0;
}