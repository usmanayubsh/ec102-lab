#include <iostream>
using namespace std;

int main ()
{
    int a, b, j;
    cout << "Enter minimum and maximum: ";
    cin >> a >> b;

    for(j = a; j < b; j++)
    {
        cout << j * j << endl;
    }
    return 0;
}
