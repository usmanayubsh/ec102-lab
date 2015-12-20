#include <iostream>
using namespace std;

#include "demo_header.h"

int main()
{
    int number;
    cout << "Enter a number: "; cin >> number;
    cout << "Square of the number is: " << square(number) << endl;
    cout << "Cube of the number is: " << cube(number) << endl;
    cout << "This number raised to the power 4 is: " << power(number, 4) << endl;
    return 0;
}

