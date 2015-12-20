using namespace std;

struct Distance
{
    int feet;
    float inches;
};

void engl_display(Distance d)
{
    cout << d.feet << "\'" << d.inches << "\"" << endl;
}

Distance engl_add(Distance d1, Distance d2)
{
    Distance d3;
    d3.feet = d1.feet + d2.feet;
    d3.inches = d1.inches + d2.inches;
    if(d3.inches >= 12)
    {
        d3.inches = d3.inches - 12;
        d3.feet++;
    }
    return d3;
}

Distance engl_max(Distance d1, Distance d2)
{
}