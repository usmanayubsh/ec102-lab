#include<iostream>
using namespace std;

int main()
{
    int x = 1, y = 0, z = 1;

    if(x > y && x > z) {y = x; z = x + 1;}
    else if(x + y >= z) {x++; z = x + 1;}
    else y = z + x;

    cout << x << ", " << y << " and " << z << endl;
    
    return 0;
}
