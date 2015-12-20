#include <iostream>
#include <iomanip>
using namespace std;

const int DISTRICTS = 4;
const int MONTHS = 3;
void display(double[DISTRICTS][MONTHS]); // function declaration

int main()
{
    double sales[DISTRICTS][MONTHS] = {{1432.07, 234.50, 654.01},
                                       {322.00, 13838.32, 17589.88},
                                       {9328.34, 934.00, 4492.30},
                                       {12838.29, 2332.63, 32.93}};
    display(sales); // function call
    cout << endl;

    return 0;
}

// function definition
void display(double funsales[DISTRICTS][MONTHS])
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
            cout << setw(10) << funsales[d][m];
        }
    }
}