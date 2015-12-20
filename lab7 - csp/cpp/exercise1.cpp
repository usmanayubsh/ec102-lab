#include <iostream>
using namespace std;

int main ()
{
    int i, j;
    for(j = 8; j > 0; j--)
    {
        for(i = 0; i < j; i++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}
