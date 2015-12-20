#include <iostream>
using namespace std;
#include "header.h"

int main()
{
    int number;
    cout << "Enter a number: "; cin >> number;
    cout << "The square of the number is: " << square(number) << endl;
    cout << "The cube of the number is: " << cube(number) << endl;
    cout << "The number raised to the power of 4 is: " << power(number, 4) << endl;
    return 0;
}