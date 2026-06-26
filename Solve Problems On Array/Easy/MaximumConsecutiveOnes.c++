//Given a binary array nums, return the maximum number of consecutive 1's in the array.

#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(int nums[],int size) {
        int cnt=0;
        int ans=0;
        for(int i=0;i<size;i++)
        {
           if(nums[i]==1)
           {
            cnt++;
           }
           else{
            cnt=0;
           }
           ans=max(cnt,ans);
        }
       return ans;

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
    cout<<findMaxConsecutiveOnes(arr,size)<<endl;
    return 0;
}