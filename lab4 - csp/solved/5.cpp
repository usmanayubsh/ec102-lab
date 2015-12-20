// takes a single character (a letter) as an argument and returns a nonzero integer if the letter is lowercase, or zero if it is uppercase
#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    char letter;
    cin >> letter;
    cout << islower(letter) << endl;
    return 0;
}