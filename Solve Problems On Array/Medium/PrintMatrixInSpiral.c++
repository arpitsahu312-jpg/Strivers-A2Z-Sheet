#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int>Vec;
    int top=0;
    int bottom=matrix.size()-1;
    int left=0;
    int right=matrix[0].size()-1;
    while(top<=bottom && left<=right)
    {
        for(int i=left;i<=right;i++)
        {
            Vec.emplace_back(matrix[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {
            Vec.emplace_back(matrix[i][right]);
        }
        right--;
        if(top<=bottom)
        {
        for(int i=right;i>=left;i--)
        {
            Vec.emplace_back(matrix[bottom][i]);
        }
        bottom--;
        }
        if(left<=right)
        {
        for(int i=bottom;i>=top;i--)
        {
            Vec.emplace_back(matrix[i][left]);
        }
        left++;
        }
    }
    return Vec;
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
    vector<int>V;
    V=spiralOrder(Vec);
    for(auto i:V)
    {
        cout<<i<<',';
    }
    return 0;
}

