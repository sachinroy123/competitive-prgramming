#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
    return b;
    return gcd(b%a,a);
}
int main()
{
    int a=36;
    int b=48;
    cout<<"GCD : "<<gcd(a,b)<<endl;
}