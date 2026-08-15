#include<bits/stdc++.h>
using namespace std;

void sumofallsubsets(int index,vector<int>&arr,int sum,vector<int>&ans)
{
    if(index==arr.size())
    {
        ans.push_back(sum);
        return;
    }
    sumofallsubsets(index+1,arr,sum,ans);
    sumofallsubsets(index+1,arr,sum+arr[index],ans);
    return;
}

vector<int> SumOfAllSubsets(vector<int>&arr)
{
    vector<int>ans;
    sumofallsubsets(0,arr,0,ans);
    sort(ans.begin(),ans.end());
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
    vector<int>ans=SumOfAllSubsets(arr);
    for(int i:ans)
    {
        cout<<i<<',';
    }
    cout<<endl;
    return 0;
}