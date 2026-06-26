//Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

//Note that you must do this in-place without making a copy of the array.

#include<bits/stdc++.h>
using namespace std;

void moveZeroes(int nums[],int size) {
         int j = 0;

        for(int i = 0; i < size; i++) {

            if(nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
        return;
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
    moveZeroes(arr,size);
    for(int i=0;i<size;i++)
    {
       cout<<arr[i]<<',';
    }
    return 0;
}
 