#include <iostream>
using namespace std;

void backward_counting(int);

int main()
{
    backward_counting(30);
    return 0;
}

void backward_counting(int x)
{
    if(x <= 0)
    {
        return;
    }
    cout << x << ", ";
    backward_counting(x - 1);
}
