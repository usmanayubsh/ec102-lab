#include <iostream>
using namespace std;
#include "mylibrary.h"

int main()
{
    Distance c, d;
    cout << "Enter a distance (feet inches): ";
    cin >> c.feet >> c.inches;

    cout << "Enter another distance (feet inches): ";
    cin >> d.feet >> d.inches;

    display_distance(add_distance(c, d));
    return 0;
}