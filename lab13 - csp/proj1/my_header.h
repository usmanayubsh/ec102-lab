float power(float e, int p)
{
    float result = 1;
    for(int i = 0; i < p; i++)
    {
        result = result * e;
    }
    return result;
}

float circle_area(float radius)
{
    return 3.142 * power(radius, 2);
}