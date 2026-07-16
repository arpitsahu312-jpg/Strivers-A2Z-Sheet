#include<bits/stdc++.h>
using namespace std;

int minEatingSpeed(vector<int>& piles, int h) {
    int n=piles.size();
    long long low=1;
    long long high=*(max_element(piles.begin(),piles.end()));
    while(low<=high)
    {
        long long mid=low+(high-low)/2;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            if(piles[i]%mid==0)
            {
            sum+=piles[i]/mid;
            }
            else
            {
            sum+=piles[i]/mid+1;
            }
        }
        if(sum<=h)
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
    int hours;
    cout<<"Enter the hours:";
    cin>>hours;
    cout<<minEatingSpeed(vec,hours);
    return 0;
}