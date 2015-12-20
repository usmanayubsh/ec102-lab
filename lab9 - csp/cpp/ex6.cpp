#include <iostream>
using namespace std;

int main()
{
    int num = 0, count = 0, m, n;

    cout << "No. of odd numbers: ";
    cin >> m;
    cout << "that are not divisible by: ";
    cin >> n;

    do
    {
        num++;
        if(num % n != 0 && num % 2 != 0)
        {
            cout << num << endl;
            count++;
        }
    } while (count < m);

    return 0;
}