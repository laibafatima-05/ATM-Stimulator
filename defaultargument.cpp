#include <iostream>
using namespace std;

float priceAfterDiscount(float price, float discount = 0.10)
{
    return price - (price * discount);
}
int main()
{
    cout << priceAfterDiscount(1000);
    return 0;
}