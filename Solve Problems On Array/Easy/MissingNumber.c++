//Given an array arr[] of size n-1 with distinct integers in the range of [1, n]. This array represents a permutation of the integers from 1 to n with one element missing. Find the missing element in the array.

#include<bits/stdc++.h>
using namespace std;

int MissingNumber(int arr[],int size)
{
    int sum=size*(size+1)/2;
    for(int i=0;i<size-1;i++)
    {
        sum=sum-arr[i];
    }
    return sum;
}


int main()
{
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    int arr[size-1];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<size-1;i++)
    {
       cin>>arr[i];
    }
    cout<<"The missing element is:"<<MissingNumber(arr,size)<<endl;
    return 0;
}