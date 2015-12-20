// overload.cpp
#include <iostream>
using namespace std;

void repchar();
void repchar(char);
void repchar(char, int);

int main()
{
    char character1, character2;
    int num;
    repchar();
    cout << "Enter a character: "; cin >> character1;
    repchar(character1);
    cout << "Enter a character: "; cin >> character2;
    cout << "Enter a number: "; cin >> num;
    repchar(character2, num);
    return 0;
}

void repchar()  // no argument
{
    for(int i = 0; i < 45; i++)
    {
        cout << "*";
    }
    cout << endl;
}

void repchar(char ch) // one argument
{
    for(int i = 0; i < 45; i++)
    {
        cout << ch;
    }
    cout << endl;
}

void repchar(char ch, int n) // two arguments
{
    for(int i = 0; i < n; i++)
    {
        cout << ch;
    }
    cout << endl;
}
