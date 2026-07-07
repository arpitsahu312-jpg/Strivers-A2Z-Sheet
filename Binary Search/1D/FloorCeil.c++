#include<bits/stdc++.h>
using namespace std;

// floor -> larget number in the array which is <= target;
// ceil -> smallest number in the array which is >=target
pair<int,int> floor_ceil(vector<int>& nums, int target) 
{
    int floor=0;
    int ceil=0;
    int right=nums.size()-1;
    int left=0;
    while(left<=right)
        {
           int mid=left+(right-left)/2;
           if(nums[mid]==target)
           {
            floor=nums[mid];
            ceil=floor;
            return {floor,ceil};
           }
           else if(nums[mid]<target)
           {
            floor=nums[mid];
            left=mid+1;
           }
           else
           {
            ceil=nums[mid];
            right=mid-1;
           }
        }
    return {floor,ceil};
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
    int target;
    cout<<"Enter the target element:";
    cin>>target;
    pair<int,int> a=floor_ceil(vec,target);
    cout<<a.first<<" "<<a.second;
    return 0;
}

