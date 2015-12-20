// #include<iostream>
// using namespace std;

// int main()
// {
//    int a, b, sum;
//    cout << "Enter first number: ";
//    cin >> a;
//    cout << "Enter second number: ";
//    cin >> b;

//    sum = a + b;

//    cout << "The sum of two numbers is: " << sum << endl;
//    return 0;
// }

#include<iostream>
#include<string>
using namespace std;

int main()
{
   string a, b, sum;
   cout << "Enter first name: ";
   cin >> a;
   cout << "Enter second name: ";
   cin >> b;

   cout << "Your complete name is: " << a + ' ' + b << endl;
   return 0;
}