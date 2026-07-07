#include<bits/stdc++.h>
using namespace std;

vector<int> firtslastoccurrence(vector<int>&nums,int target)
{
   int lb=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
   int ub=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
   if(lb==nums.size() || nums[lb]!=target){
        return {-1,-1};
      }
   else{
        return {lb,ub-1};
      }
   return {-1,-1};
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
    vector<int> V=firtslastoccurrence(vec,target);
    cout<<V[0]<<" "<<V[1];
    return 0;
}