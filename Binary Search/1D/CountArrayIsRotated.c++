#include<bits/stdc++.h>
using namespace std;

int CountRotation(vector<int>& nums) {
        int Min=INT_MAX;
        int index=0;
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            if(nums[low]<nums[high])
            {
               return low;
            }
            int mid=low+(high-low)/2;
            if(nums[low]<=nums[mid])
            {
               if(nums[low]<Min)
               {
                Min=nums[low];
                index=low;
               }
                low=mid+1;
            }
            else
            {
                if(nums[low]<Min)
               {
                Min=nums[low];
                index=mid;
               }
                high=mid-1;
            }
        }
        return index;
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
    cout<<CountRotation(vec);
    return 0;
}