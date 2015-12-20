// demonstrates WHILE loop
#include <iostream>
using namespace std;
int main()
{
    int num, eoi = -1;

    cout << "Enter a number: ";
    cin >> num;
    while(num != eoi)
    {
        if(num % 2 == 0)
        {
            cout << "The number is even.\n";
        }
        else
        {
            cout << "The number is odd.\n";
        }
        cout << "Enter a number: ";
        cin >> num;
    }

    return 0;
}