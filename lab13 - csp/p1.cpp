#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    float inches;
};

Distance max_of_two(Distance, Distance);
void engldisp(Distance);

int main()
{
    Distance d1, d2;
    cout << "Enter feet and inches of distance 1: ";
    cin >> d1.feet >> d1.inches;
    cout << "Enter feet and inches of distance 2: ";
    cin >> d2.feet >> d2.inches;
    cout << "The larger among them is: ";
    engldisp(max_of_two(d1, d2));

    return 0;
}

Distance max_of_two(Distance d1, Distance d2)
{
    if(d1.feet + d1.inches / 12 > d2.feet + d2.inches / 12)
    {
        return d1;
    }
    else
    {
        return d2;
    }
}

void engldisp(Distance dd)
{
    cout << dd.feet << "\'-" << dd.inches << "\"" << endl;
}