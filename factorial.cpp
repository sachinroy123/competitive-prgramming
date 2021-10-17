#include<iostream>
using namespace std;

//  using recursion 
unsigned int fact( unsigned int n)
{
    if(n==1 || n==0)
    return 1;
    return n*fact(n-1);
}

int main()
{
    unsigned int num = 5;
    cout<<fact(num)<<endl;

    int fac=1;

    while(num>1)
    {
        fac =fac*num;
        num--;
    }
    cout<<" foctoial is : "<<fac<<endl;


}