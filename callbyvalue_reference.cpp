#include <iostream>
using namespace std;

void byValue(int x) {
    x = 100;
}

void byReference(int &x) {
    x = 100;
}

int main() {
    int a = 5, b = 5;
    
    byValue(a);
    byReference(b);
    
    cout << "a = " << a << endl;   // a = 5
    cout << "b = " << b << endl;   // b = 100
}