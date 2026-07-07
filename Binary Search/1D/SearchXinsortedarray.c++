#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
        int right=nums.size()-1;
        int left=0;
        while(left<=right)
        {
           int mid=left+(right-left)/2;
           if(nums[mid]==target)
           {
            return mid;
           }
           else if(nums[mid]<target)
           {
            left=mid+1;
           }
           else
           {
            right=mid-1;
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
    cout<<search(vec,target);
    return 0;
}