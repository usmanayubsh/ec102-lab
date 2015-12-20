#include <iostream>
#include <iomanip>
using namespace std;

struct employee
{
    int number;
    float compensation;
};

int main()
{
    employee mobeen;
    employee hassan;
    employee rashid;

    cout << "Enter Employee Number: "; cin >> mobeen.number;
    cout << "Enter Employee's Compensation: "; cin >> mobeen.compensation;

    cout << "Enter Employee Number: "; cin >> hassan.number;
    cout << "Enter Employee's Compensation: "; cin >> hassan.compensation;

    cout << "Enter Employee Number: "; cin >> rashid.number;
    cout << "Enter Employee's Compensation: "; cin >> rashid.compensation;

    cout << "\nNumber" << setw(14) << "Compensation" << endl;
    cout << mobeen.number << setw(14) << mobeen.compensation << endl;
    cout << hassan.number << setw(14) << hassan.compensation << endl;
    cout << rashid.number << setw(14) << rashid.compensation << endl;

    return 0;
}