#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    static int count;
public:
     void setData()
    {
      cout<<"Enter roll number: ";
      cin>>rollNo;
      count++;
    }
     void getData()
    {
      cout<<"Roll number: "<<rollNo<<endl;
      cout<<"Student number: "<<count <<endl;
    }
};
int Student::count = 0;
int main()
{
    Student s1, s2, s3;
    
    s1.setData();
    s1.getData();

    s2.setData();
    s2.getData();

    s3.setData();
    s3.getData();

    return 0;
}