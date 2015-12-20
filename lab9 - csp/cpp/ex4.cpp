// demonstrates DO loop
#include <iostream>
using namespace std;
int main()
{
    float dividend, divisor;
    char ch;
    do
        {
            cout << "Enter dividend: ";
            cin >> dividend;

            cout << "Enter divisor: ";
            cin >> divisor;

            cout << "Quotient is " << dividend / divisor;
            cout << ", remainder is " << (int)dividend % (int)divisor;

            cout << "\nDo another? (y/n): ";
            cin >> ch;
        }
    while(ch != 'n');
return 0;
}