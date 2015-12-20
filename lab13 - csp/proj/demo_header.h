int power(int r, int n)
{
    int result = 1;
    for(int i = 0; i < n; i++)
    {
        result = result * r;
    }
    return result;
}

int square(int r)
{
    return power(r, 2);
}

int cube(int r)
{
    return power(r, 3);
}