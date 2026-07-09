#include<bits/stdc++.h>
using namespace std;

int searchedsortedarray(vector<int>&nums,int target)
{
    int low=0;
    int high=nums.size()-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        if(nums[mid]==nums[low] && nums[mid]==nums[high])
        {
            low++;
            high--;
            continue;
        }
        if(nums[low]<=nums[mid])
        {
            if(nums[low]<=target && target<nums[mid])
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        else
        {
           if(nums[mid]<target && target<=nums[high])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int> vec(n);
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    cout<<"\n";
    int target;
    cout<<"Enter the target element:";
    cin>>target;
    cout<<searchedsortedarray(vec,target);
    return 0;
}