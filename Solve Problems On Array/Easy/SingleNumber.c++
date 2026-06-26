//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

//You must implement a solution with a linear runtime complexity and use only constant extra space.

#include<bits/stdc++.h>
using namespace std;

int singleNumber(int nums[], int size) {
        int num=0;
        for(int i=0;i<size;i++)
        {
            num=num^nums[i];
        }
        return num;
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
    cout<<singleNumber(arr,size)<<endl;
    return 0;
}