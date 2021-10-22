#include<iostream>
using namespace std;

int binarySearch(int a[],int l,int r,int data)
{
    if(r>=l)
    {
        int mid = l+ (r-1)/2;
        if(a[mid]==data)
        return mid;

        if(a[mid]>data)
        return binarySearch(a,l,mid-1,data);

        return binarySearch(a,mid+1,r,data);
    }
    return -1;
}

int main()
{
    int a[] = {10,20,30,40,50};
    int n = sizeof(a)/sizeof(a[0]);
    int result = binarySearch(a,0,n-1,500);
    (result==-1) ? cout<<"Data not found "<<endl :
         cout<<"data founded :"<<result<<endl;
}