#include<bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
    int mid=0;
    int left=0;
    int right=nums.size()-1;
    while(left<=right)
    {
        mid=left+(right-left)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        else if(target>nums[mid])
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }

    }
    return left;
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
    cout<<searchInsert(vec,target)<<endl;
    return 0;
}

