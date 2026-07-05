#include<bits/stdc++.h>
using namespace std;

int LargetSubarray(vector<int>&nums)
{
    int n=nums.size();
    int presum=0;
    int maxlength=0;
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
         presum=presum+nums[i];
         if(presum==0)
         {
            maxlength=max(maxlength,i+1);
         }
         else if(mpp.find(presum)!=mpp.end())
         {
            maxlength=max(maxlength,i-mpp[presum]);
         }
          else 
         {
            mpp[presum]=i;
         }
    }
    return maxlength;
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
    cout<<"The length of larget sub array with sum zero is:"<<LargetSubarray(vec);
    return 0;
} 