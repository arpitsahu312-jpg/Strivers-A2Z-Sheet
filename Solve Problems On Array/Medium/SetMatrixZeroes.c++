#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
        int col0=1;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
               if(matrix[i][j]==0)
               {
                matrix[i][0]=0;
                if(j==0)
                {
                  col0=0;
                }
                else{
                 matrix[0][j]=0;
                }
               }
            }
        }
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
               if(matrix[i][j]!=0)
               {
                if(matrix[i][0]==0||matrix[0][j]==0)
                {
                    matrix[i][j]=0;
                }
               }
            }
            
        }
        if(matrix[0][0]==0)
        {
            for(int j=1;j<n;j++)
            {
                matrix[0][j]=0;
            }
        }
        if(col0==0)
        {
            for(int i=0;i<m;i++)
            {
                matrix[i][0]=0;
            }
        }

    }

int main()
{
 int m,n;
    cout<<"Enter the value of m,n:";
    cin>>m>>n;
    vector<vector<int>> Vec(m,vector<int>(n));
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>Vec[i][j]; 
        }
    }
    setZeroes(Vec);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<Vec[i][j]<<','; 
        }
        cout<<"\n";
    }
    return 0;
}