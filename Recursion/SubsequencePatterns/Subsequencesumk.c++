#include<bits/stdc++.h>
using namespace std;

int countsubsequencessumk(int index,vector<int>&arr,int sum,int k)
{
    if(index==arr.size())
    {
        return sum==k;
    }
    return countsubsequencessumk(index+1,arr,sum+arr[index],k)+countsubsequencessumk(index+1,arr,sum,k);
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
    cout<<countsubsequencessumk(0,arr,0,k)<<endl;
    return 0;
}