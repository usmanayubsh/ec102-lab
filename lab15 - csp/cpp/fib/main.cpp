#include <iostream>
using namespace std;

int fibonacci(int);

int main()
{
    int x;
    cout << "Enter x: "; cin >> x;
    for(int i = 0; i < x; i++)
    {
        cout << fibonacci(i) << ", ";
    }
    return 0;
}

int fibonacci(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
