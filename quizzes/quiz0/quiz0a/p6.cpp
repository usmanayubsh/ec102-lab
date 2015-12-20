#include <iostream>
using namespace std;

int main()
{
    cout << (2.5 < 2.6 && 'c' != 'C') << endl
    << (1 || 'd' > 'c' && 1) << endl
    << (1 <= 6 % 2 && 2.05 > 20.5) << endl
    << !('x' <= 'y' || 'x' >= 'y' && 5.5 > 3) << endl
    << ('c' != 'C' && 25 > 24 || 'a' > 'b') << endl;

    return 0;
}