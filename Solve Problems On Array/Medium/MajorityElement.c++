#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {
    int arr[1]={};
    int elem=nums[0];
    arr[0]=1;
    int n=nums.size();
    for(int i=1;i<n;i++){
        if(nums[i]==elem && arr[0]>0){
            arr[0]++;
        }
        else if(nums[i] != elem && arr[0]>0){
            arr[0]--;
        }
        else if(arr[0]==0){
            elem=nums[i];
            arr[0]++;
        }
    }
    return elem;
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
    cout<<"The majority element is:"<<majorityElement(vec);
    return 0;
}