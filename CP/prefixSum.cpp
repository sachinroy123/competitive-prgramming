#include<bits/stdc++.h>
using namespace std;

void prefix(int a[],int prefixSum[],int n)
{
    int sum=0;
    prefixSum[0] =a[0];
    for(int i=1;i<n;i++)
    {
        prefixSum[i] = a[i]+prefixSum[i-1];
    }
}

int main()
{
  int a[] = {10,20,30,40,50};
  int n = sizeof(a)/sizeof(a[0]);
  int prefixSum[n] = {0};
  prefix(a,prefixSum,n);
  cout<<"PrefixSum Array's elements :"<<endl;
  for(int i=0;i<n;i++)
  {
      cout<<prefixSum[i]<<" ";
  }
}