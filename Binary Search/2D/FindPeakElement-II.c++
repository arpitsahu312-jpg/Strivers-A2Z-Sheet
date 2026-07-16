#include<bits/stdc++.h>
using namespace std;
vector<int> findPeakGrid(vector<vector<int>>& mat) 
{
      vector<int>ans(2,-1);
       int m=mat.size();
       int n=mat[0].size(); 
       int low=0;
       int high=n-1;
       while(low<=high)
       {
           int mid=low+(high-low)/2;
           int k=0;
           int maxval=mat[0][mid];
           for(int i=0;i<m;i++)
           {
              if(mat[i][mid]>maxval)
              {
                  k=i;
                  maxval=mat[i][mid];
              }
           }

           int left=mid!=0?mat[k][mid-1]:-1;
           int right=mid!=n-1?mat[k][mid+1]:-1;

           if(mat[k][mid]>left && mat[k][mid]>right)
           {
             ans[0]=k;
             ans[1]=mid;
             return ans;
           }
           else if(mat[k][mid]<left)
           {
            high=mid-1;
           }
           else
           {
            low=mid+1;
           }
           
       }
       return ans;
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
    cout<<findPeakGrid(matrix)[0]<<" "<<findPeakGrid(matrix)[1];
    return 0;
}