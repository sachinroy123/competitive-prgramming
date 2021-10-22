#include<bits/stdc++.h>
using namespace std;

int lcm(int a,int b)
{
    int lcm = a*b/__gcd(a,b);
    return lcm;
}

int main()
{
    int a,b;
    cout<<"enter the numbers :"<<endl;
    cin>>a>>b;
    cout<<"LCM of "<<a<<" and "<<b<<" = "<<lcm(a,b)<<endl;

}