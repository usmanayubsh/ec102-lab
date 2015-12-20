// demonstrates a simple function
#include <iostream>
using namespace std;

void repeat_star(int, char);

int main()
{
    repeat_star(23, '-');
    cout << "Data-type  Range" << endl;
    repeat_star(33, '-');
    cout << "char       -128 to 127" << endl;
    cout << "short      -32,768 to 32,767" << endl;
    cout << "int        System dependent" << endl;
    cout << "long       -2,147,483,648 to 2,147,483,647" << endl;
    repeat_star(43, '*');
    return 0;
}

void repeat_star(int n, char ch)
{
    for(int i = 0; i < n; i++)
        {
            cout << ch;
        }
        cout << endl;
}