#include <iostream>
using namespace std;

int main() {
    int marks = 70;
    if (marks >= 80)
    {
        cout << "A";
    }
    else if (marks >= 60)
    {
        cout << "B";
    }
    else if(marks >= 50)
    {
        cout << "C";
    }
    else 
    {
        cout << "D";
    }
    return 0;
}