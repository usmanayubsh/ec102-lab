#include<iostream>
using namespace std;

int Add(int X, int Y, int Z)
{
    return X + Y;
}

double Add(double X, double Y, double Z)
{
    return X + Y;
}

int main()
{
    cout << Add(5, 6);
    cout << Add(5.5, 6.6);
    return 0;
}
