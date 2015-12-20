// factor2.cpp
// calculates factorials using recursion

#include <iostream>
using namespace std;

int factorial(int);

int main()
{
    cout << factorial(5) << endl;
    return 0;
}

int factorial(int number)
{
    if(number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}
