#include<bits/stdc++.h>
using namespace std;

    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        if(n<4){
            return ans;
        }
        sort(nums.begin(),nums.end());
        for(int i =0;i<n-3;i++){
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            for(int j = i+1 ;j<n-2;j++){
                if(j>i+1 && nums[j] == nums[j-1]){
                    continue;
                }
                long long  s = (long long)nums[i] + (long long)nums[j];
                long long rem = (long long)target - s;
                int l=j+1;
                int r=n-1;
                while(l<r){
                    long long sum = nums[l] +nums[r];
                    if(sum== rem){
                        ans.push_back({nums[i],nums[j],nums[l],nums[r]});
                        l++;
                        r--;
                        while(l<r && nums[l] == nums[l-1]){
                            l++;
                        }
                        while(l<r && nums[r] == nums[r+1]){
                            r--;
                        }
                    }
                    else if( sum > rem){
                        r--;
                    }
                    else {
                        l++;
                    }
                }
            }
        }
        return ans;
    }

   int main()
{
 int size;
    cout<<"Enter the size of array:";
    cin>>size;
    vector<int> vec(size,0);
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>vec[i];
    }
    int target;
    cout<<"Enter the target value:";
    cin>>target;
    cout<<'\n';
    vector<vector<int>> V=fourSum(vec,target);
    for(int i=0;i<V.size();i++)
    {
        for(int j=0;j<V[i].size();j++)
        {
            cout<<V[i][j]<<',';
        }
        cout<<'\n';
    }
    return 0;
} 
