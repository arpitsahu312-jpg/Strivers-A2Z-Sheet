#include<bits/stdc++.h>
using namespace std;

vector<int> missing_repetation(vector<int>&nums)
{
    int n=nums.size();
    int diff=n*(n+1)/2;
    int sum= n*(n+1)*(2*n+1)/6;
    for(int i=0;i<n;i++)
    {
        diff=diff-nums[i];
        sum=sum-(nums[i]*nums[i]);
    }
    sum=sum/diff;
    vector<int>ans(2);
    ans[0]=(sum-diff)/2;
    ans[1]=(sum+diff)/2;
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int> Vec(n);
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>Vec[i];
    }
    vector<int>V1=missing_repetation(Vec);
    for(int i=0;i<V1.size();i++)
    {
        cout<<V1[i]<<',';
    }
    return 0;
}