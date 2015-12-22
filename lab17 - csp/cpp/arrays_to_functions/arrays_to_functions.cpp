#include <iostream>
#include <iomanip>
using namespace std;

const int DISTRICTS = 4;
const int MONTHS = 3;

void display(float [DISTRICTS][MONTHS]);

int main()
{
    float s[DISTRICTS][MONTHS] = {{1432.07, 234.50, 654.01},
                                  {322.00, 13838.32, 17589.88},
                                  {9328.34, 934.00, 4492.30},
                                  {12838.29, 2332.63, 32.93}};
    display(s);
    return 0;
}

void display(float sales[DISTRICTS][MONTHS])
{
    int d, m;
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
}