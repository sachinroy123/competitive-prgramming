#include<bits/stdc++.h>
using namespace std;


void primeFactor(int n)
{
    int count=0;

    // print all the 2's 
    while (n%2==0)
    {
        /* code */
        count++;
        n = n/2;
    }
    cout<<" 2's = "<<count<<endl;
    cout<<" n = "<<n<<endl;
 //
 
  for(int i=3;i<=sqrt(n);i=i+2)
  {
      count=0;
      while (n%i==0)
      {
          /* code */
          count++;
          n /= i;
      }
      if(count>0)
      cout<<i<<"'s = "<<count<<endl;
  }

  if(n>2)
  cout<<n<<"'s = 1"<<endl;


    
}

int main()
{
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;

    primeFactor(n);
}