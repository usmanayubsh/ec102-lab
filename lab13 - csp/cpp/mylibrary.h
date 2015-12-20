struct Distance
{
    int feet;
    int inches;
};

Distance add_distance(Distance x, Distance y)
{
    Distance w;
    w.feet = x.feet + y.feet;
    w.inches = x.inches + y.inches;
    if(w.inches >= 12)
    {
        w.inches -= 12;
        w.feet++;
    }
    return w;
}

void display_distance(Distance z)
{
    cout << z.feet << "'-" << z.inches << "\"" << endl;
}