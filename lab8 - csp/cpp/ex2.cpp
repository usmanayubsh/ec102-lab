// sum using while loop (buggy)
#include <iostream>
using namespace std;

int main()
{
    int num = 0, sum = 0;
    char eoi = 'y';
    while(eoi != 'n')
    {
        cout << "Enter a number: ";
        cin >> num;

        sum = sum + num;
        cout << "Do you want to continue (y/n): ";
        cin >> eoi;
    }
    cout << "Sum = " << sum << endl;

    return 0;
}