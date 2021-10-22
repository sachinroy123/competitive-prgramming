#include<bits/stdc++.h>
using namespace std;

void power(int a, int b)
{
    int pow=1;
   for(int i=1;i<=b;i++)    
   {
        pow = pow *a;
    }
    cout<<a<<"^"<<b<<" = "<<pow<<endl;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<a<<"^"<<b<<" = "<<(int)(pow(a,b)+0.5)<<endl;

    //another method to get power of any number 
    power(a,b);


}