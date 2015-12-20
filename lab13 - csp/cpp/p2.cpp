#include <iostream>
using namespace std;

long hms_to_secs(int, int, int);

int main()
{
    int hrs, mins, secs;
    char c, separator;

    do
    {
        cout << "Enter the time (hh:mm:ss): ";
        cin >> hrs >> separator >> mins >> separator >> secs;
        cout << "Time in seconds: " << hms_to_secs(hrs, mins, secs) << endl;
        cout << "Continue (y/n)?: "; cin >> c;
    } while(c == 'y');

    return 0;
}

long hms_to_secs(int h, int m, int s)
{
    return h * 3600 + m * 60 + s;
}