#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{
    string str = to_string(n);
        int len = str.length();
cout<<"len :"<<len<<endl;
    if(len == 1)
      return true;
    else{
        for(int i=0;i<len; i++)
        {
            if(str[i] != str[len-i-1])
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;
    
    if(palindrome(n) ==true ) cout<<"number is palindrome :"<<endl; else cout<<"number is not palindrome :"<<endl;
}