// calculator
#include <iostream>
using namespace std;

int main()
{
    float num, result;
    char op;

    cout << "Number: "; // first number
    cin >> num;
    result = num;

    cout << "Operator: ";
    cin >> op;

    do
    {
        cout << "Number: ";
        cin >> num;

        switch(op)
        {
            case '+':
            result = result + num;
            break;

            case '-':
            result = result - num;
            break;

            case '*':
            result = result * num;
            break;

            case '/':
            result = result / num;
            break;
        }

        cout << "Operator: ";
        cin >> op;
    } while(op != 'q');

    cout << "\nAnswer = " << result << endl;
    return 0;
}