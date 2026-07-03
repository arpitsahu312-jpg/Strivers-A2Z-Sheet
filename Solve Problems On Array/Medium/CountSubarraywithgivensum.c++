#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
        int cnt=0;
        int presum=0;
        unordered_map<int,int>mpp;
        mpp[presum]++;
        for(int i:nums)
        {
          presum=presum+i;
          auto it=mpp.find(presum-k);
          if(it !=mpp.end())
          {
            cnt=cnt+it->second;
          }
          mpp[presum]++;
        }
       return cnt;
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
    cout<<"Enter the sum:"<<endl;
    int k;
    cin>>k;
    cout<<"No of subarrays whoes sum is "<<k<<" are:"<<subarraySum(vec,k);
    return 0;
}
