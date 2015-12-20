// displays sales chart using 2-d array
#include <iostream>
#include <iomanip>
using namespace std;

const int DISTRICTS = 4; // array dimensions
const int MONTHS = 3;

int main()
{
    int d, m;
    double sales[DISTRICTS][MONTHS]; // two-dimensional array defintion

    cout << endl;
    for (d = 0; d < DISTRICTS; d++)
    {
        for (m = 0; m < MONTHS; ++m)
        {
            cout << "Enter sales for district " << d + 1;
            cout << ", month " << m + 1 << ": ";
            cin >> sales[d][m];
        }
    }

    cout << "\n\n";
    cout << "                        Month\n";
    cout << "                1         2         3";
    for (d = 0; d < DISTRICTS; d++)
    {
        cout << "\nDistrict " << d + 1;
        for (m = 0; m < MONTHS; m++)
        {
            cout << setw(10) << sales[d][m];
        }
    }
    cout << endl;
    return 0;
}