#include<bits/stdc++.h>
using namespace std;

   void BackTracking(vector<vector<int>>& ans, vector<int>& current, const vector<int>& candidates, int target, int start) {
        if (target == 0) {
            ans.push_back(current);
            return;
        } 
        for (int i = start; i < candidates.size(); i++) {
            if (i > start && candidates[i] == candidates[i - 1]) {
                continue;
            }
            if (candidates[i] > target) {
                break;
            }
            current.push_back(candidates[i]);
            BackTracking(ans, current, candidates, target - candidates[i], i + 1);
            current.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
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
        vector<vector<int>> ans=combinationSum2(arr,k);
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

