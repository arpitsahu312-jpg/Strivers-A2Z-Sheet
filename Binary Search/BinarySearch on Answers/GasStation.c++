#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

// Changed return type to double
double minimumdistancebetweengasstation(vector<int>& nums, int k)
{
    int n = nums.size();
    double low = 0;
    double high = 0;
    for(int i = 1; i < n; i++)
    {
        high = max(high, (double)(nums[i] - nums[i - 1]));
    }

    while(high - low > 1e-6)
    {
        double mid = low + (high - low) / 2.0;
        int stationsNeeded = 0;
        for(int i = 1; i < n; i++)
        {
            double gap = nums[i] - nums[i - 1];
            stationsNeeded += (int)(gap / mid);
        }
        if(stationsNeeded <= k)
        {
            high = mid; 
        }
        else
        {
            low = mid;
        }
    }
    
    return low;
}

int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int k;
    cout<<"Enter the no of gas cyclinder to be inserted:";
    cin>>k;
    cout<<minimumdistancebetweengasstation(nums,k);
    return 0;
}