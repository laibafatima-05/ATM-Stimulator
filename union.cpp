#include <iostream>
using namespace std;

union student
{
    int rollNo;
    char grade;
    float marks;
};
int main()
{
    union student ali;
    ali.rollNo = 10;
    cout << ali.rollNo << endl;
    return 0;
}