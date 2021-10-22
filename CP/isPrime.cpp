#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if(n <=1)
    return false;

    for(int i=2;i<sqrt(n); i++)
    {
        if(n%i ==0)
        return false;
    }
    return true;
}

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
         cout<<"Enter the number you want to check whether it is prime or not :"<<endl;
         int n;
         cin>>n;
         isprime(n) ? cout<<"Prime :"<<endl : cout<<"Not Prime "<<endl;
     }
}