#include <iostream>
#include <iomanip>
using namespace std;

enum etype {
    Professor,
    Associate,
    Assistant
};

struct employee
{
    int number;
    etype type;
    float compensation;
};

int main()
{
    int temp_type;
    employee mobeen;
    employee hassan;
    employee rashid;

    cout << "Enter Employee Number: "; cin >> mobeen.number;
    cout << "Enter Employee's Type: "; cin >> temp_type;
    mobeen.type = 0;
    cout << "Enter Employee's Compensation: "; cin >> mobeen.compensation;

    cout << "Enter Employee Number: "; cin >> hassan.number;
    cout << "Enter Employee's Compensation: "; cin >> hassan.compensation;

    cout << "Enter Employee Number: "; cin >> rashid.number;
    cout << "Enter Employee's Compensation: "; cin >> rashid.compensation;

    cout << "\nNumber" << setw(14) << "Compensation" << endl;
    cout << mobeen.number << setw(14) << mobeen.compensation;
    cout << setw(14) << mobeen.compensation << endl;
    cout << hassan.number << setw(14) << hassan.compensation;
    cout << setw(14) << hassan.type << endl;
    cout << rashid.number << setw(14) << rashid.compensation;
    cout << setw(14) << rashid.type << endl;

    return 0;
}