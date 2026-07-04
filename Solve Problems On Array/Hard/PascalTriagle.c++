#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> PascalTriangle(int RowNumber)
{
    vector<vector<int>> Vec;
    for(int i=0;i<RowNumber;i++)
    {
        vector<int>v1(i+1);
        v1[0]=v1[i]=1;
        for(int j=1;j<i;j++)
        {
            v1[j]=Vec[i-1][j-1]+Vec[i-1][j];
        }
        Vec.push_back(v1);
        v1.clear();
    }
    return Vec;
}

int main()
{
    int RowNumber;
    cout<<"Enter the rownumber:";
    cin>>RowNumber;
    vector<vector<int>> Vec;
    Vec=PascalTriangle(RowNumber);
    cout<<'\n';
    for(int i=0;i<Vec.size();i++)
    {
        for(int j=0;j<Vec[i].size();j++)
        {
            cout<<Vec[i][j]<<',';
        }
        cout<<'\n';
    }
    return 0;
}