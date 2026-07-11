#include<bits/stdc++.h>
using namespace std;

int nthroot(int num,int N)
{
    int low=1;
    int high=num;
    while(low<=high)
    {
       int mid=low+(high-low)/2;
       int n=pow(mid,N);
       if(n==num)
       {
        return mid;
       }
       else if(n<num)
       {
        low=mid+1;
       }
       else
       {
        high=mid-1;
       }
    }
    return -1;
}

int main()
{
    cout<<"Enter a positive number:";
    int num;
    cin>>num;
    cout<<"Enter the value of N:";
    int N;
    cin>>N;
    cout<<"The "<<N<<"th root of " <<num<<" is:"<<nthroot(num,N);
    return 0;
}