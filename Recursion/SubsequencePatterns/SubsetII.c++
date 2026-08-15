#include<bits/stdc++.h>
using namespace std;


     void BackTracking(vector<vector<int>>& ans, vector<int>& current, const vector<int>& candidates,int start) {
        ans.push_back(current);
        for(int i=start;i<candidates.size();i++)
        {
            if(i>start && candidates[i]==candidates[i-1])
            {
                continue;
            }
            current.push_back(candidates[i]);
            BackTracking(ans,current,candidates,i+1);
            current.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> current;
        BackTracking(ans, current,nums,0);
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
    vector<vector<int>>ans=subsetsWithDup(arr);
    for(vector<int> i:ans)
    {
        for(int j:i)
        {
            cout<<j<<',';
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}