// shows days from start of the year to date specified
#include <iostream>
using namespace std;

int main()
{
    int day, month, total_days;

    int days_of_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cout << "Enter month (1 to 12): ";
    cin >> month;
    cout << "Enter day (min 1, max 31): ";
    cin >> day;

    total_days = day;
    for (int i = 0; i < month - 1; i++)
    {
        total_days = total_days + days_of_month[i];
    }
    cout << "Total days from the start of the year is: " << total_days << endl;
    return 0;
}