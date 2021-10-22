#include<bits/stdc++.h>
using namespace std;


void fun(int a[],int n)
{
    int sum=0;
    int prefixSum =0;

    for(int i=0;i<n;i++)
        sum += a[i];

    for(int i=0;i<n;i++)
    {
        sum -=a[i];
        if(sum== prefixSum)
        cout<<i<<endl;
        else{

            prefixSum += a[i];
        }
    }    


}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[] = {-7, 1, 5, 2, -4, 3, 0};
        int n = sizeof(a)/sizeof(a[0]);
        // fun(a,n);
        fun2(a,n);
    }
}