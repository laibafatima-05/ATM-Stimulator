#include <iostream>
using namespace std;

class Car
{
public:
    string color;
    int speed;

    Car() // Default Constructors
    {
        color = "Red";
        speed = 100;
    }
    void show()
    {
        cout << "Color: " << color << endl;
        cout << "Speed: " << speed << endl;
    }
};
int main()
{
    Car c1;
    c1.show();
    return 0;
}