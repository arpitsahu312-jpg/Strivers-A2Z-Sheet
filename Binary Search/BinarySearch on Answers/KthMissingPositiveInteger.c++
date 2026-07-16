#include<bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
int low=0;
int high =arr.size()-1;
while(low<=high)
{
    int mid=low+(high-low)/2;
    int missing=arr[mid]-(mid+1);

    if(missing<k) low=mid+1;
    else high=mid-1;
}
return high+1+k;
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
    int k;
    cout<<"Enter the k:";
    cin>>k;
    cout<<findKthPositive(vec,k);
    return 0;
}