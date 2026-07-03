#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums) {
       int sum=INT_MIN;
       int prevsum=0;
       int i=0;
       int j=0;
       int size=nums.size();
       while(j<size)
       {
          prevsum=prevsum+nums[j];
          if(nums[j]>prevsum)
          {
            i=j;
            prevsum=nums[j];
          }
          if(prevsum>sum)
          {
            sum=prevsum;
          }
          j++;
       }
       return sum;
    }

int main()
{
 int size;
    cout<<"Enter the size of array:";
    cin>>size;
    vector<int> vec(size,0);
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>vec[i];
    }
    cout<<"The maximum sum of a subarray is:"<<maxSubArray(vec);
    return 0;  
}