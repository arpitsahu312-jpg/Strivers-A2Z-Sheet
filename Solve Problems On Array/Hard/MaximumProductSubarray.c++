#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
        double product=INT_MIN;
        double prefix=1;
        double suffix=1;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(prefix==0) prefix=1;
            if(suffix==0) suffix=1;

            prefix=prefix*nums[i];
            suffix=suffix*nums[n-i-1];

            product=max({product,suffix,prefix});
        }
        return product;
    }

int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<maxProduct(arr);
    return 0;
}