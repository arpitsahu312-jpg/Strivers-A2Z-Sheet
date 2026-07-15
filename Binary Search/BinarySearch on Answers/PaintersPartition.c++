#include<bits/stdc++.h>
using namespace std;

bool ispartition(vector<int>&boards,int maxallocation,int noofpainters )
{
    int cnt=1;
    int sum=0;
    for(int i=0;i<boards.size();i++)
    {
       if(sum+boards[i]<=maxallocation)
       {
        sum+=boards[i];
       }
       else{
         cnt++;
         sum=boards[i];
       }
    }
    return cnt<=noofpainters;
}

int painterpartition(vector<int>&boards,int noofpainters)
{
      int low=boards[0];
      int high=0;
      for(int i:boards)
      {
        low=max(low,i);
        high+=i;
      }
      while(low<=high)
      {
        int mid=low+(high-low)/2;
        if(ispartition(boards,mid,noofpainters))
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
      }
      return low;
}

int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int> boards(n);
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>boards[i];
    }
    int noofpainters;
    cout<<"Enter the no of painters:";
    cin>>noofpainters;
    cout<<painterpartition(boards,noofpainters);
    return 0;
}