#include<iostream>
using namespace std;

int main()
{
    int number, a, b, c, d, e; // possible choices: int, long

    cout << "Enter a five-digit number: "; cin >> number;

    a = number % 10;
    number /= 10;
    b = number % 10;
    number /= 10;
    c = number % 10;
    number /= 10;
    d = number % 10;
    number /= 10;
    e = number;

    cout << e << "   " << d << "   " << c << "   " << b << "   " << a;
}

// Marks distribution
// a variable declared as an integer/long for a five-digit number   ... 2
// cin used to read that number into the variable                   ... 1
// modulo and division by 10                                        ... 3
// modulo and division used correctly                               ... 3
// result displayed                                                 ... 3
// result displayed correctly                                       ... 3
//
// cin >> a >> b >> c >> d >> e; completely wrong
