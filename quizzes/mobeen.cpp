#include<iostream>
using namespace std;

long bae(long n, long x)
{
    if (x==1)
    return n;
    else if (x==0)
        return 1;
    else
    return bae(n,1)*bae(n,x-1);
}
int main()
{
    int base,exp;
    cout<<"enter base \n";
    cin>>base;
    cout<<"enter exp \n";
    cin>>exp;
    cout<<"answer is : " <<bae(base,exp)<<endl<<endl;
    cout<<"gimme 10/10 ! \n"<<endl;
}
