#include<bits/stdc++.h>
using namespace std;

// upper bound-> the smallest index such that nums[index]>target

int upperbound(vector<int>& nums, int target) {
        int right=nums.size()-1;
        int left=0;
        int ans=nums.size();
        while(left<=right)
        {
           int mid=left+(right-left)/2;
           if(nums[mid]>target)
           {
             ans=mid;
             right=mid-1;
           }
           else{
            left=mid+1;
           }
        }
        return ans;
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
    cout<<upperbound(vec,target);
    return 0;
}

// In coding round use ub=upper_bound(start,end)