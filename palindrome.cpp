#include<iostream>
using namespace std;

bool palindrome(string str)
{
    int len = str.length();
    for(int i=0;i<len/2;i++)
    {
        if(str[i] != str[len-i-1])
         return false; 
    }
    return true;
}
int main()
{
    string str = "12344321";
    (palindrome(str)==true) ? cout<<"Yes"<<endl : cout<<"NO"<<endl;
}