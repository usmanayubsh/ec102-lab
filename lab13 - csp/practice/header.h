int power(int r, int n)
{
    int multiplier = 1;
    for(int i = 0; i < n; i++)
    {
        multiplier = multiplier * r;
    }
    return multiplier;
}

int square(int r)
{
    return power(r, 2);
}

int cube(int r)
{
    return power(r, 3);
}