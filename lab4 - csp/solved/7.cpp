// this program converts temperature from degrees Celsius to degrees Fahrenheit
#include <iostream>
using namespace std;

int main()
{
    float celsius, fahren;

    cin >> celsius;
    fahren = 9 / 5.0 * celsius + 32;
    cout << fahren << endl;
    return 0;
}