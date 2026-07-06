#include<bits/stdc++.h>
using namespace std;

int merge(int left,int mid,int right,int arr[])
{
    vector<int> temp;
    int p1=left;
    int p2=mid+1;
    int cnt=0;
    while(p1<=mid && p2<=right)
    {
        if(arr[p1]> 2ll*(arr[p2]))
        {
            cnt+=mid-p1+1;
            p2++;
        }
        else{
            p1++;
        }
    }
    p1=left;
    p2=mid+1;
    while(p1<=mid && p2<=right)
    {
        if(arr[p1]>arr[p2])
        {
          temp.push_back(arr[p2]);
          p2++;
        }
        else
        {
          temp.push_back(arr[p1]);
          p1++;
        }
    }
    while(p2<=right)
    {
        temp.push_back(arr[p2]);
        p2++;
    }
     while(p1<=mid)
    {
        temp.push_back(arr[p1]);
        p1++;
    }
    int k=0;
    for(int i=left;i<=right;i++)
    {
        arr[i]=temp[k];
        k++;
    }
    return cnt;
}

int MergeSort(int low,int high,int arr[])
{
    int cnt=0;
    if(low==high) return cnt;
    int mid=low+(high-low)/2;
    cnt+=MergeSort(low,mid,arr);
    cnt+=MergeSort(mid+1,high,arr);
    cnt+=merge(low,mid,high,arr);
    return cnt;
}
int ReversePairs(int arr[],int size)
{
    return MergeSort(0,size-1,arr);    
}

int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<ReversePairs(arr,n);
    return 0;
}