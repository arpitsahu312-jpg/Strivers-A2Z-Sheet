#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    sort(intervals.begin(),intervals.end());
    int n=intervals.size();
    vector<vector<int>> ans;
    for(int i=0;i<n;i++)
    {
        if(ans.empty()||ans.back()[1]<intervals[i][0])
        {
            ans.push_back(intervals[i]);
        }
        else{
            ans.back()[1]=max(ans.back()[1],intervals[i][1]);
        }
    }
    return ans;
}

int main()
{
 int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<vector<int>> Vec(n,vector<int>(2));
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>Vec[i][j]; 
        }
    }
    vector<vector<int>>V1=merge(Vec);
    for(int i=0;i<V1.size();i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<V1[i][j]<<','; 
        }
        cout<<"\n";
    }
    return 0;
}