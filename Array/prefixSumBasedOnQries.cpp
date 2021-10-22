#include<bits/stdc++.h>
using namespace std;

void prefixSumBasedOnQuries(int a[],int n, int prefixSum[],int l, int r)
{
    prefixSum[0] = a[0];

    for(int i=1;i<n;i++)
       prefixSum[i] =a[i]+prefixSum[i-1];

    if(l==0)
    cout<<prefixSum[r]<<endl;
    else{
        cout<<prefixSum[r] -prefixSum[l]<<endl;
    }   
    
}

int main()
{
    int t;
    cin>>t;
    int a[] = {10,20,30,40,50,60};
        int n =sizeof(a)/sizeof(a[0]);
    int prefixSum[n];
    while(t--)
    {
        int l,r;
        cout<<"enter the left and right indexes :"<<endl;
        cin>>l>>r;
        prefixSumBasedOnQuries(a,n,prefixSum,l,r);
    }

   
}