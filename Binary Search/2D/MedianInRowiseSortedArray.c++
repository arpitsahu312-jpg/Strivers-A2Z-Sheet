#include<bits/stdc++.h>
using namespace std;

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

int cntLessThanOrEqualTo(vector<vector<int>>matrix,int k)
{
    int cnt=0;
    for(int i=0;i<matrix.size();i++)
    {
        cnt+=upperbound(matrix[i],k);
    }
    return cnt;
}

int findMedian(vector<vector<int>>&matrix) {
    int m=matrix.size();
    int n=matrix[0].size();
    int low=INT_MAX;
    int high=INT_MIN;
    for(int i=0;i<m;i++)
    {
       low=min(low,matrix[i][0]);
    }
    for(int i=0;i<m;i++)
    {
       high=max(high,matrix[i][n-1]);
    }
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        int cnt=cntLessThanOrEqualTo(matrix,mid);
        if(cnt<=(n*m)/2) low=mid+1;
        else high=mid-1;
    }
    return low;
}

int main()
{
    int n,m;
    cout<<"Enter the size of matrix n x m:";
    cin>>n>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    cout<<"Enter the elements of the matrix:";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<findMedian(matrix);
    return 0;
}