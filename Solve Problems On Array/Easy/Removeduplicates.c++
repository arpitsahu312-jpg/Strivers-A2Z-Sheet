// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.
 
// Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​. After removing duplicates, return the number of unique elements k.

// The first k elements of nums should contain the unique numbers in sorted order. The remaining elements beyond index k - 1 can be ignored.

#include<bits/stdc++.h>
using namespace std;

int Removedduplicates(int nums[],int size)
{
  int elem=nums[0];
        int k=0;
        int p=0;
        for(int i=0;i<size;i++)
        {
           if(nums[i]!=elem){
           nums[k+1]=nums[i];
           k++;
           elem=nums[i];
           }
        }
        return k+1;
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
    cout<<Removedduplicates(arr,size)<<endl;
    return 0;
}
