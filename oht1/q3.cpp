#include <iostream>
using std::cout;
using std::endl;

// int main()
// {
//     int a = 1, r = 2, r_mul = 1, n = 8;

//     for(int i = 0; i < n; i++)
//     {
//         r_mul = r_mul * r;
//     }

//     cout << a * (1 - r_mul) / (1 - r) << endl;
//     return 0;
// }

#include <cmath>
int main()
{
    int a = 1, r = 2, n = 8;

    cout << a * (1 - pow(r, n)) / (1 - r) << endl;
    return 0;
}