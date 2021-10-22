#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(a==0)
    return b;
    return gcd(b%a,a);
}

int main()
{
    int a,b;
    cout<<"enter the two numbers :"<<endl;
    cin>>a>>b;
    cout<<"HCF of "<<a<<" and  "<<b<<" = "<<10gcd(a,b)<<endl;
}