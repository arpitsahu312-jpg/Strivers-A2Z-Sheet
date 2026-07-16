#include<bits/stdc++.h>
using namespace std;

int shipWithinDays(vector<int>& weights, int days) {
int n=weights.size();
    int low=0;
    int high=0;
    for(int i=0;i<n;i++)
    {
        low=max(low,weights[i]);
        high+=weights[i];
    }
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        int sum=0;
        int reqdays=1;
        for(int i=0;i<n;i++)
        {
            sum+=weights[i];
            if(sum>mid)
            {
                reqdays++;
                sum=weights[i];
            }
        }
        if(reqdays<=days)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return low;
}

int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int> vec(n);
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    cout<<"\n";
    int Days;
    cout<<"Enter the Days:";
    cin>>Days;
    cout<<shipWithinDays(vec,Days);
    return 0;
}