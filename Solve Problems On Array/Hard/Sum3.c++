#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> sum3(vector<int>&nums)
{
    sort(nums.begin(),nums.end());
    vector<vector<int>> vec;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        if(i>0 && nums[i-1]==nums[i]) continue;

        int j=i+1;
        int k=n-1;
        while(j<k)
        {
            int sum=nums[i]+nums[j]+nums[k];
            if(sum<0)
            {
                j++;
            }
            else if(sum>0)
            {
                k--;
            }
            else{
               vec.push_back({nums[i],nums[j],nums[k]});
               j++;
               k--;
               while(j<k && nums[j]==nums[j-1]) j++;
               while(j<k && nums[k]==nums[k+1]) k--; 
            }
        }
    }
    return vec;
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
    cout<<'\n';
    vector<vector<int>> V=sum3(vec);
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