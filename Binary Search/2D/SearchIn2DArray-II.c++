#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if(matrix.size()==0) return false;
    int n=matrix.size();
    int i=0;
    int j=matrix[0].size()-1;
    while(i<n && j>=0)
    {
    int elem=matrix[i][j];
    if(elem==target) return true;
    if(elem<target) i++;
    else j--;
    }
    return false;
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
    int target;
    cout<<"Enter the target element:";
    cin>>target;
    cout<<searchMatrix(matrix,target);
    return 0;
}