#include <iostream>
using namespace std;
int c = 30;
int main() {
cout<< "Build in Data Types" <<endl;
    int a, b, c;
cout<< "Enter the value of a";
cin>>a;
cout<< "Enter the value of b";
cin>>b;
c=a + b;
cout<< "The sum is"<<c<<endl; 
cout<<"The value of global c is "<<::c<<endl;

cout<< "Float and long double Literals" <<endl;
float d = 55.5f;
long double e = 55.5l; 
cout<<"The value of 55.5 is " <<sizeof(55.5)<<endl;
cout<<"The value of 55.5f is " <<sizeof(55.5f)<<endl;
cout<<"The value of 55.5F is " <<sizeof(55.5F)<<endl;
cout<<"The value of 55.5l is " <<sizeof(55.5l)<<endl;
cout<<"The value of 55.5L is " <<sizeof(55.5L)<<endl;
cout<< "The value of d is "<<d<<endl<<"The value of e is "<<e<<endl; 

cout<< " Reference Variables" <<endl;
float x = 78.8;
float & y = x;
cout<<x<<endl;
cout<<y<<endl;

cout<< " Typecasting " <<endl;
float f = 34.44;
cout<< "The value of f is " <<int(f);
return 0;
}