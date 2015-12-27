#include <iostream>
using namespace std;

struct Part
{
    int modelnumber;
    int partnumber;
    float cost;
};

int main()
{
    const int SIZE = 4;
    int n;

    Part apart[SIZE]; // define array of structures

    for (int n = 0; n < SIZE; n++) // get values for all
    {
        cout << endl;
        cout << "Enter model number: "; // get model number
        cin >> apart[n].modelnumber;

        cout << "Enter part number: "; // get part number
        cin >> apart[n].partnumber;

        cout << "Enter cost: "; // get cost
        cin >> apart[n].cost;
    }
    cout << endl;

    for (int n = 0; n < SIZE; n++) // show values for all
    {
        cout << "Model " << apart[n].modelnumber;
        cout << " Part " << apart[n].partnumber;
        cout << " Cost " << apart[n].cost << endl;
    }

    return 0;
}