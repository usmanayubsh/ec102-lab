#include <iostream>
#include "my_header.h"
using namespace std;

int main()
{
    float radius;
    cout << "Enter a radius: "; cin >> radius;
    cout << "The area of the circle is: " << circle_area(radius) << endl;

    return 0;
}