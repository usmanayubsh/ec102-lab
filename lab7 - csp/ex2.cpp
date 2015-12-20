#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num;

    for(num = 1; num <= 10; num++)
    {
        cout << setw(4) << num;
        int cube = num * num * num;
        cout << setw(6) << cube << endl;
    }
    return 0;
}