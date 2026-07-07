#include<bits/stdc++.h>
using namespace std;

int countoccurrence(vector<int>&nums,int target)
{
   int lb=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
   int ub=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
   if(lb==nums.size() || nums[lb]!=target){
        return 0;
      }
   else{
        return ub-lb;
      }
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
    int target;
    cout<<"Enter the target element:";
    cin>>target;
    cout<<countoccurrence(vec,target);
    return 0;
}