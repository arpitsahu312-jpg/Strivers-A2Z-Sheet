#include<bits/stdc++.h>
using namespace std;
void Transpose(vector<vector<int>>& matrix)
    {
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
               int temp=matrix[i][j];
               matrix[i][j]=matrix[j][i];
               matrix[j][i]=temp;
            }
        }
        return;
    }
    void reverse(vector<vector<int>>& matrix)
    {
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[i][n-1-j];
                matrix[i][n-1-j]=temp;
            }
        }
        return;
    }
    void rotate(vector<vector<int>>& matrix) {
        Transpose(matrix);
        reverse(matrix);
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
    rotate(Vec);
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