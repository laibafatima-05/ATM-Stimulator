#include <iostream>
using namespace std;

class Calculator {
public:
    int multiply(int a, int b) {
        return a * b;
    }

    int multiply(int a, int b, int c) {
        return a * b * c;
    }
};
int main() {
    Calculator obj;

    cout << obj.multiply(2, 3) << endl;
    cout << obj.multiply(2, 3, 4) << endl;

    return 0;
}