#include <iostream>
using namespace std;

int main()
{
    int x, y;
    x = 5;
    y = ++x * ++x;
    cout << x << y << endl;
    x = 5;
    cout << x++ * 1 << endl;
    y = x++ * ++x;
    cout << x << y << endl;
    x = 5;
    cout << x++ << endl;
    cout << x << endl;
    return 0;
}