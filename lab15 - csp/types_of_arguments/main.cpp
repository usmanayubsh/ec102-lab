// overengl.cpp
// demonstrates overloaded functions
#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    float inches;
};

void display_measurement(int);
void display_measurement(Distance);

int main()
{
    cout << "int as an argument" << endl;
    display_measurement(24);
    display_measurement(25);
    display_measurement(26);

    cout << "structure as an argument" << endl;
    Distance dist = {1, 3.4};
    display_measurement(dist);

    return 0;
}

void display_measurement(int measurement)
{
    int feet = measurement / 12;
    int inches = measurement - feet * 12;
    cout << feet << "\'-" << inches << "\"" << endl;
}

void display_measurement(Distance measurement)
{
    cout << measurement.feet << "\'-" << measurement.inches << "\"" << endl;
}
