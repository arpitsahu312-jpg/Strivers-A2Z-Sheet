#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums) {
        int Min=INT_MAX;
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[low]<nums[high])
            {
               return min(Min,nums[low]);
            }
            if(nums[low]<=nums[mid])
            {
                Min=min(Min,nums[low]);
                low=mid+1;
            }
            else
            {
                Min=min(Min,nums[mid]);
                high=mid-1;
            }
        }
        return Min;
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
    cout<<findMin(vec);
    return 0;
}