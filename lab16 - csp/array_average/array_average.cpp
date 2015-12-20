// averages a weeks's sales
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 6;
    double sales[SIZE];

    cout << "Enter widget sales for 6 days:\n";
    for (int j = 0; j < SIZE; j++)
        cin >> sales[j];

    double total = 0;
    for (int j = 0; j < SIZE; j++)
        total += sales[j];

    cout << "Average: " << total / SIZE << endl;
    return 0;
}