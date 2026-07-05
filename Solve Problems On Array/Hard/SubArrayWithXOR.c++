#include<bits/stdc++.h>
using namespace std;

int CountSubArray(vector<int>&nums,int target)
{
    int n=nums.size();
    int presum=0;
    int cnt=0;
    unordered_map<int,int>mpp;
    mpp[0]=1;
    for(int i=0;i<n;i++)
    {
         presum=presum^nums[i];
         int required=target^presum;
         cnt+=mpp[required];
         mpp[presum]++;
    }
    return cnt;
}

int main()
{
 int size;
    cout<<"Enter the size of array:";
    cin>>size;
    vector<int> vec(size,0);
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>vec[i];
    }
    int target;
    cout<<"Enter the target number:";
    cin>>target;
    cout<<"The no of subarray eith XOR " << target<<" is:"<<CountSubArray(vec,target);
    return 0;
} 