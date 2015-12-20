// demonstrates DO loop
#include <iostream>
using namespace std;
int main()
{
    int num, fact;
    do
        {
            fact = 1;
            cout << "Enter a number: ";
            cin >> num;

            for(int i = num; i > 1; i--)
            {
                fact = fact * i;
            }

            cout << "The factorial of the number is: " << fact << endl;
        }
    while(num != 0);
return 0;
}