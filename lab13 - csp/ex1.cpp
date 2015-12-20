// demonstrates return values, converts pounds to kg
#include <iostream>
using namespace std;

float lbstokgs(float); // declaration

int main()
{
    float lbs, kgs;
    cout << "Enter your weight in pounds: "; cin >> lbs;

    kgs = lbstokgs(lbs);
    cout << kgs << endl; // 4
    cout << lbs; // 3
    return 0;
}

float lbstokgs(float pounds)
{
    float pounds = pounds + 1;
    return pounds;
}