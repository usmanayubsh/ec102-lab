#include <iostream>
#include "english.h"
using namespace std;

int main()
{
    Distance  dist1, dist2, dist3;
    cout << "Enter Distance 1 (feet inches): ";
    cin >> dist1.feet >> dist1.inches;
    cout << "Enter Distance 2 (feet inches): ";
    cin >> dist2.feet >> dist2.inches;
    engl_display(engl_add(dist1, dist2));
    return 0;
}