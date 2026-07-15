#include<bits/stdc++.h>
using namespace std;

bool CanplaceCows(vector<int>cows,int distance, int noofcows)
{
    int coordinate=cows[0];
    int reqcows=1;
    for(int i=1;i<cows.size();i++)
    {
        if(cows[i]-coordinate>=distance)
        {
             reqcows++;
             coordinate=cows[i];
        }
    }
    return reqcows>=noofcows;
}

int aggresivecows(vector<int>&cows, int noofcows)
{
    sort(cows.begin(),cows.end());
    int low=cows[0];
    int high=cows[cows.size()-1];
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(CanplaceCows(cows,mid,noofcows))
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;
}

int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int> cows(n);
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>cows[i];
    }
    int noofcows;
    cout<<"Enter the no of cows to be placed:";
    cin>>noofcows;
    cout<<aggresivecows(cows,noofcows);
    return 0;
}