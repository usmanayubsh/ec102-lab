#include <iostream>
using namespace std;

void firstn(int = 2, int = 10);

int main()
{
    firstn();
    firstn(3);
    firstn(2, 3);
    return 0;
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
