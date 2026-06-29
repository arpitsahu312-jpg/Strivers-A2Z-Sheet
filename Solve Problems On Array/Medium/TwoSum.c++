#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> v1=nums;
    vector<int> v2;
    int arr[2]={0};
    int n=nums.size();
    sort(nums.begin(),nums.end());
    int i=0;
    int j=n-1;
    while(i != j){
        if(nums[i]+nums[j]==target){
            arr[0]=nums[i];
            arr[1]=nums[j];
            break;
        }
        else if(nums[i]+nums[j]>target){
            j--;
        }
        else{
            i++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
        if(v1[i]==arr[j] ){
            v2.push_back(i);
            break;
        }
        }
    }
    return v2;
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
    int target;
    cout<<"Enter the target value:"<<endl;
    cin>>target;
    vector<int> v2=twoSum(vec,target);
    for(int i:v2)
    {
        cout<<i<<',';
    }
    return 0;
}
