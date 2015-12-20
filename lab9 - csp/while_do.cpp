#include <iostream>
using namespace std;

int main()
{
    int num = 25;
    while(num > 25 && num < 28)
    {
        cout << "while";
    }

    do
    {
        cout << "do" << endl;
        // num++;
    } while (num > 25 && num < 28);
    return 0;
}