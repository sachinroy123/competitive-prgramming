#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n)
{
    if(n<=1)
    return false;
    else{
        for(int i=2; i<sqrt(n); i++)
        {
            if(n%i ==0)
            return false;
        }
        else true;
    }
}

int main()
{
    (isPrime(11)) ? cout<<"YES "<<endl : cout<<"NO "<<endl;
}