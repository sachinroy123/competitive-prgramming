#include<bits/stdc++.h>
using namespace std;


void primes(int n)
{
    for(int i=2;i<n;i++)
    {
        int j,f=0;
        for( j=2;j<=sqrt(i);j++)
        {
            if(i%j == 0)
             f=1;
        }
        if(f==0)
        cout<<i<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the range :"<<endl;
    cin>>n;

    primes(n);
}