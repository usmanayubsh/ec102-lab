// demonstrates function arguments
#include <iostream>
using namespace std;

void rep_char(char, int); // function declaration

int main()
{
    rep_char('-', 45);
    cout << "Data-type  Range" << endl;
    rep_char('-', 45); // call to function

    cout << "char       -128 to 127" << endl;
    cout << "short      -32,768 to 32,767" << endl;
    cout << "int        System dependent" << endl;
    cout << "long       -2,147,483,648 to 2,147,483,647" << endl;
    rep_char('=', 45);

    return 0;
}

void rep_char(char ch, int n)
{
    for(int j = 0; j < n; j++)
    {
        cout << ch;
    }
    cout << endl;
}