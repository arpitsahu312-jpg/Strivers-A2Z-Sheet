// Condition for applying Binary Search 
// 1. Search Space -> should be sorted

#include<bits/stdc++.h>
using namespace std;

int iterative_BinarySearch(vector<int>&nums,int target)
{
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

int recursive_BinarySearch(vector<int>&nums,int left,int right,int target)
{
    if(left>right) return -1;
    int mid=left+(right-left)/2;
    if(nums[mid]==target) return mid;
    else if(nums[mid]<target) return recursive_BinarySearch(nums,mid+1,right,target);
    else return recursive_BinarySearch(nums,left,mid-1,target);
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
    cout<<iterative_BinarySearch(vec,target)<<endl;
    cout<<recursive_BinarySearch(vec,0,vec.size()-1,target)<<endl;
    return 0;
}

// Time Complexity of Binary Search -> O(log(n))
// Overflow in binary search
// ->if you write mid=(low+right)/2;
// -> replace it by mid=low+(right-low)/2;