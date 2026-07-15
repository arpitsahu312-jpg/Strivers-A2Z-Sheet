#include<bits/stdc++.h>
using namespace std;

int KthElementOfSortedArray(vector<int>& nums1, vector<int>& nums2,int k) {
    if(nums2.size()<nums1.size()) return KthElementOfSortedArray(nums2,nums1,k);
    int n1=nums1.size();
    int n2=nums2.size();
    int low=0,high=n1;
    while(low<=high)
    {
        int cut1=(low+high)>>1;
        int cut2=k-cut1;

        int left1=cut1==0?INT_MIN:nums1[cut1-1];
        int left2=cut2==0?INT_MIN:nums2[cut2-1];
        
        int right1=cut1==n1?INT_MAX:nums1[cut1];
        int right2=cut2==n2?INT_MAX:nums2[cut2];

        if(left1<=right2 && left2<=right1)
        {
            return max(left1,left2);
        }
        else if(left1>right2)
        {
            high=cut1-1;
        }

        else
        {
            low=cut1+1;
        }
    }
    return 0;
}

int main()
{
    int n1;
    cout<<"Enter the size of array:";
    cin>>n1;
    vector<int> nums1(n1);
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>nums1[i];
    }
    int n2;
    cout<<"Enter the size of array:";
    cin>>n2;
    vector<int> nums2(n2);
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n2;i++)
    {
        cin>>nums2[i];
    }
    int k;
    cout<<"Enter the value of k:";
    cin>>k;
    cout<<KthElementOfSortedArray(nums1,nums2,k);
    return 0;
}