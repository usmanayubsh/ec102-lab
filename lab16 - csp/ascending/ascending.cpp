// gets four ages from user and displays them
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int numbers[SIZE], temp; // def

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter a number: ";
        cin >> numbers[i]; // init
    }

    for(int i = 0; i < SIZE; i++) // {10, 23, 1, 45, 9}
        for(int j = 0; j < SIZE; j++)
            {
                if(numbers[i] < numbers[j])
                {
                    temp = numbers[i];
                    numbers[i] = numbers[j];
                    numbers[j] = temp;
                }
            }

    for(int i = 0; i < SIZE; i++)
    {
        cout << numbers[i] << endl;
    }

    return 0;
}