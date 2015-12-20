// this program asks the user to enter a number of gallons and displays the equivalent in cubic feet.

#include <iostream>
using namespace std;

int main()
{
    float gallons, cubic_feet;

    cin >> gallons;
    cout << gallons * 7.481 << endl;
    return 0;
}