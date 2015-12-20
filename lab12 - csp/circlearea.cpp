#include <iostream>
using namespace std;

float circle_area(float);

int main()
{
    float radius, area;

    cout << "Enter a radius: ";
    cin >> radius;

    area = circle_area(radius);
    cout << "The area of the circle is: " << area << endl;
    return 0;
}

float circle_area(float r)
{
    return 3.142 * r * r;
}