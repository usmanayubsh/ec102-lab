#include <iostream>
using namespace std;

struct part
{
    int id, modelnumber;
    float cost;
};

int main()
{
    part part1;

    part1.modelnumber = 62;
    part1.id = 12;
    part1.cost = 22.57;

    cout << "Model " << part1.modelnumber << " ID " << part1.id << " Cost " << part1.cost << endl;

    return 0;
}