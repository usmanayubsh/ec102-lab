#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    float inches;
};

struct Volume
{
    Distance length;
    Distance width;
    Distance height;
};

int main()
{
    Volume dining;

    dining.length.feet = 13; // accessing nested structure members
    dining.length.inches = 6.5;
    dining.width.feet = 10;
    dining.width.inches = 0.0;
    dining.height.feet = 10;
    dining.height.inches = 0.0;

    float l = dining.length.feet + dining.length.inches / 12;
    float w = dining.width.feet + dining.width.inches / 12;
    float h = dining.height.feet + dining.height.inches / 12;

    cout << "Volume of the dining room is: " << l * w * h << " cubic ft\n";
    return 0;
}