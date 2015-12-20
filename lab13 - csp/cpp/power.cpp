#include <iostream>
using namespace std;

int power(int, int);
int square(int);
int cube(int);


int main()
{
    int e = 2, r;
    r = square(e);
    cout  << r << endl;

    return 0;
}

int power(int r, int n)
{
    int multiplier = 1;
    for(int i = 0; i < n; i++)
    {
        multiplier = multiplier * r;
    }
    return multiplier;
}

int square(int x)
{
    return power(x, 2);
}

int cube(int x)
{
    return square(x) * x;
}