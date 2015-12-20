#include <iostream>
using namespace std;

void firstn();
void firstn(int);
void firstn(int, int);

int main()
{
    firstn();
    firstn(3);
    firstn(2, 3);
    return 0;
}

void firstn()
{
    int counter = 0, number = 1;
    while(counter < 10)
    {
        if(number % 2 == 0)
        {
            cout << number << ", ";
            counter++;
        }
        number++;
    }
    cout << endl;
}

void firstn(int m)
{
    int counter = 0, number = 1;
    while(counter < 10)
    {
        if(number % m == 0)
        {
            cout << number << ", ";
            counter++;
        }
        number++;
    }
    cout << endl;
}

void firstn(int m, int n)
{
    int counter = 0, number = 1;
    while(counter < n)
    {
        if(number % m == 0)
        {
            cout << number << ", ";
            counter++;
        }
        number++;
    }
    cout << endl;
}
