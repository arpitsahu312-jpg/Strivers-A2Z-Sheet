#include<bits/stdc++.h>
using namespace std;

void BackTracking(vector<vector<int>>& ans,vector<int>& current,int k,int target,int start)
    {
        if(current.size()==k)
        {
           if(target==0)
           {
             ans.push_back(current);
           }
           return;
        }
        for (int i = start+1; i <=9; i++) {
            current.push_back(i);
            BackTracking(ans, current,k, target -i, i);
            current.pop_back();
        }
    }

vector<vector<int>> combinationSum(int k, int target) {
    vector<vector<int>> ans;
    vector<int> current;
    BackTracking(ans, current,k, target, 0);
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int k;
    cout<<"Enter the target sum"<<endl;
    cin>>k;
    vector<vector<int>> ans=combinationSum(n,k);
     for(auto i:ans)
     {
       for(int j:i)
       {
        cout<<j<<",";
       }
       cout<<endl;
     }
    return 0;
}
