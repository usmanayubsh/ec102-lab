#include <iostream>
using namespace std;
int main()
{
    int jane = 44;
    int harry = 12;

    cout << (jane == harry && harry <= 12) << endl;
    cout << (jane == harry || harry <= 12) << endl;
    cout << !(jane == harry) << endl;

    cout << (jane > harry && jane >= 44) << endl;
    cout << (jane > harry || jane >= 44) << endl;
    cout << !(jane > harry || jane >= 44) << endl;
    return 0;
}