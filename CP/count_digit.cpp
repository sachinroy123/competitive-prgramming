#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;

    // method 1 (log10)
    cout<<"number of digits :"<<floor(log10(n)+1)<<endl;


  // string method 
     string str = to_string(n);
     cout<<"number of digits :"<<str.size()<<endl;

    // gernal method
     int count=0;
     while(n != 0)
     {
         count++;
         n /= 10;
     }
     cout<<"count :"<<count<<endl;
    
    
}