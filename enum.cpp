#include <iostream>
using namespace std;

int main()
{
    enum TrafficLight
    {
        Red,
        Yellow,
        Green,
    };

    TrafficLight light = Red;
    cout << light;
    return 0;
}