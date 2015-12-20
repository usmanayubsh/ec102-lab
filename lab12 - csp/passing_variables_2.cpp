// demonstrates function arguments
#include <iostream>
using namespace std;

void rep_char(char, int); // function declaration

int main()
{
    char chin;
    int nin;

    cout << "Enter a character: ";
    cin >> chin;
    cout << "Enter number of times to repeat it: ";
    cin >> nin;

    rep_char(chin, nin);

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