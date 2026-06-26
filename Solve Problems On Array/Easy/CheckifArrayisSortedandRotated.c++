//Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

#include<bits/stdc++.h>
using namespace std;

bool CheckArray(int arr[],int size)
{
    int cnt=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>arr[(i+1)%size])
        {
            cnt++;
        }
    }
    return cnt<=1;
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
    cout<<CheckArray(arr,size)<<endl;
    return 0;
}
