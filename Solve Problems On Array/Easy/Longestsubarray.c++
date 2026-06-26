//Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0.

#include<bits/stdc++.h>
using namespace std;

int Longestsubarray(int arr[],int size,int k)
{
    map<long long,int> mpp;
    long long sum=0;
    int len;
    for(int i=0;i<size;i++)
    {
       sum=sum+arr[i];
       if(sum==k) 
       {
        len=max(len,i+1);
       }
       long long rem=sum-k;
       if(mpp.find(rem) != mpp.end())
       {
         int l=i-mpp[rem];
         len=max(len,l);
       }
       if(mpp.find(sum)==mpp.end())
       {
          mpp[sum]=i;
       }
    }
    return len;
}

int main()
{
 int size;
    cout<<"Enter the size of array:";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<size;i++)
    {
       cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of k:"<<endl;
    cin>>k;
    cout<<Longestsubarray(arr,size,k)<<endl;
    return 0;
}
