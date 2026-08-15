#include<bits/stdc++.h>
using namespace std;

void BackTracking(vector<vector<int>>& ans,vector<int>& current,vector<int> const& candidates,int target,int start)
    {
    if (target == 0) {
        ans.push_back(current);
    } else if (target < 0) {
        return;
    }
    for (int i = start; i < candidates.size(); i++) {
        auto candidate = candidates[i];
        current.push_back(candidate);
        BackTracking(ans, current, candidates, target - candidate, i);
        current.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> current;
    BackTracking(ans, current, candidates, target, 0);
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the target sum"<<endl;
    cin>>k;
    vector<vector<int>> ans=combinationSum(arr,k);
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
