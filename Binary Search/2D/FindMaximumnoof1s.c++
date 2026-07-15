#include<bits/stdc++.h>
using namespace std;

int MaximumOnes(vector<vector<int>>&matrix)
{
    int n=matrix.size();
    if(n==0) return -1;
    int m=matrix[0].size();
    if(m==0) return -1;

    int maxcnt=0;
    int index=-1;
    for(int i=0;i<n;i++)
    {
        int low=0;
        int high=m-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(matrix[i][mid]==1)
            {
              high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        int cnt=m-low;
        if(cnt>maxcnt)
        {
            maxcnt=cnt;
            index=i;
        }
    }
    return index;
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
    cout<<MaximumOnes(matrix);
    return 0;
}