#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 15;
    cout << "Operators in C++:" << endl;
    cout << "Following are the types of operators in C++" << endl;
    // Arithematic Operators
    cout << "a + b is " << a + b << endl;
    cout << "a - b is " << a - b << endl;
    cout << "a * b is " << a * b << endl;
    cout << "a / b is " << a / b << endl;
    cout << "a % b is " << a % b << endl;
    cout << "a ++ is " << a++ << endl;
    cout << "a -- is " << a-- << endl;
    cout << "++ a is " << ++a << endl;
    cout << "-- a is " << --a << endl;

    // Assignment Operators --> used to assign values to variables
    cout << "Following are assignment operators in C++" << endl;
    a += 5;
    cout << a << endl;
    a -= 3;
    cout << a << endl;
    a *= 2;
    cout << a << endl;
    a /= 4;
    cout << a << endl;
    a %= 3;
    cout << a << endl;

    // Comparison Operators
    cout << " Following are the comparison operators in C++" << endl;
    cout << " a == b is " << (a == b) << endl;
    cout << " a != b is " << (a != b) << endl;
    cout << " a >= b is " << (a >= b) << endl;
    cout << " a <= b is " << (a <= b) << endl;
    cout << " a > b is " << (a > b) << endl;
    cout << " a < b is " << (a < b) << endl;

    // Logical Operators
    cout << " Following are the logical operators in C++" << endl;
    cout << "The value of logical and operator((a==b) && (a<b)) is:" << ((a == b) && (a < b)) << endl;
    cout << "The value of logical or operator((a==b) || (a<b)) is:" << ((a == b) || (a < b)) << endl;
    cout << "The value of logical not operator(!(a==b)) is:" << (!(a == b)) << endl;

    // Bitwise Operators
    cout << "Following are bitwise operators in C++" << endl;
    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (a ^ b) << endl;
    cout << (~a) << endl;
    cout << (a << 1) << endl;
    cout << (a >> 1) << endl;
    return 0;
}