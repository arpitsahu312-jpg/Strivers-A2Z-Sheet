//Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

#include<bits/stdc++.h>
using namespace std;
void rotate(int nums[], int k,int size) {
        int num1[size];
        for(int i=0;i<size;i++)
        {
            num1[i]=nums[i];
        }
        for(int i=0;i<size;i++)
        {
            nums[(i+k)%size]=num1[i];
        }
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
    rotate(arr,k,size);
    for(int i=0;i<size;i++)
    {
       cout<<arr[i]<<',';
    }
    return 0;
}
