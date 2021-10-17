#include<bits/stdc++.h>
using namespace std;


int main()
{

    long long num = 343422342342;

//    this is log10 method to find the number of digits 
    cout<<"by log method : "<<floor(log10(num)+1)<<endl;

    // String method to find the number of digit in a number 
    string str = to_string(num);
    cout<<"by string method : "<<str.length()<<endl;

    // Using loop
    int count = 0;
    while(num>0)
    {
        count++;
        num /= 10; 
    }
    cout<<"*Using loop : "<<count<<endl;

}