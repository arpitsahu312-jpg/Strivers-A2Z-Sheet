#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int>& nums){
    int maxi=INT_MIN;
    for(int x:nums){
        maxi=max(maxi,x);
    }
    return maxi;
}
int smallestDivisor(vector<int>& nums, int threshold) {
    int size=nums.size();
    int low=1;
    int high=findMax(nums);
    if(threshold==size)
    {
        return high;
    }
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        long sum=0;
        for(int i=0;i<size;i++)
        {
            sum+=(nums[i]+mid-1)/mid;
        }
        if(sum<=threshold)
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
    int threshold;
    cout<<"Enter the threshold:";
    cin>>threshold;
    cout<<smallestDivisor(vec,threshold);
    return 0;
}