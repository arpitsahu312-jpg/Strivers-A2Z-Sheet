#include<bits/stdc++.h>
using namespace std;

bool issplit(vector<int>&nums,int maxsum,int k)
{
    int sum=0;
    int cnt=1;
    for(int i=0;i<nums.size();i++)
    {
            if(sum+nums[i]>maxsum)
            {
            cnt++;
            sum=nums[i];
            }
            else
            {
            sum+=nums[i];
            }
    }
    return cnt<=k;
}
int splitArray(vector<int>& nums, int k) {
    int low=nums[0];
    int high=0; 
    for(int i:nums)
    {
    low=max(low,i);
    high+=i;
    }
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(issplit(nums,mid,k))
        {
        high=mid-1;
        }
        else
        {
        low=mid+1;
        }
    }
    return low;
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
    int k;
    cout<<"Enter the k:";
    cin>>k;
    cout<<splitArray(vec,k);
    return 0;
}