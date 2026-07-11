#include<bits/stdc++.h>
using namespace std;

int sqrtnum(int num)
{
    int low=1;
    int high=num;
    while(low<=high)
    {
       int mid=low+(high-low)/2;
       int square=mid*mid;
       if(square==num)
       {
        return mid;
       }
       else if(square<num)
       {
        low=mid+1;
       }
       else
       {
        high=mid-1;
       }
    }
    return high;
}

int main()
{
    cout<<"Enter a positive number:";
    int num;
    cin>>num;
    cout<<"The square root of " <<num<<" is:"<<sqrtnum(num);
    return 0;
}