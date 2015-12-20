#include <iostream>
using namespace std;

enum days_of_the_week
{
    Sun = 1,
    Mon = 2,
    Tue = 3,
    Wed = 4,
    Thu = 6,
    Fri = 7,
    Sat = 8
};

int main()
{
    days_of_the_week day1, day2;

    day1 = Mon;
    day2 = Wed;

    int diff = day2 - day1; // integer arithmetic
    cout << "Days between = " << diff << endl;

    if (day1 < day2) // can do comparisons
    {
        cout << "day1 comes before day2" << endl;
    }
    return 0;
}