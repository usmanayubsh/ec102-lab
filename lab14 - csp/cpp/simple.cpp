// ref.cpp
// demonstrates passing by reference
#include <iostream>
using namespace std;
void intfrac(float, int&, float&); //declaration

int main()
{
    float number, fracpart;
    int intpart;

    do {
    cout << "\nEnter a real number: "; //number from user
    cin >> number;
    intfrac(number, intpart, fracpart); //find int and frac
    cout << "Integer part is " << intpart //print them
    << ", fraction part is " << fracpart << endl;
    } while( number != 0.0 ); //exit loop on 0.0
    return 0;
}
//--------------------------------------------------------------
// intfrac()
// finds integer and fractional parts of real number
void intfrac(float n, int& intp, float& fracp)
{
    intp = n;
    fracp = n - intp; //subtract integer part
}