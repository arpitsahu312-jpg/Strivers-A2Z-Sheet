#include<bits/stdc++.h>
using namespace std;

bool allocatebook(vector<int>&books,int maxallocation,int noofstudents )
{
    int cnt=1;
    int sum=0;
    for(int i=0;i<books.size();i++)
    {
       if(sum+books[i]<=maxallocation)
       {
        sum+=books[i];
       }
       else{
         cnt++;
         sum=books[i];
       }
    }
    return cnt<=noofstudents;
}

int bookallocation(vector<int>&books,int noofstudents)
{
      int n=books.size();
      int low=books[0];
      int high=0;
      for(int i:books)
      {
        low=max(low,i);
        high+=i;
      }
      while(low<=high)
      {
        int mid=low+(high-low)/2;
        if(allocatebook(books,mid,noofstudents))
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
    vector<int> books(n);
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>books[i];
    }
    int noofstudents;
    cout<<"Enter the no of students to be alloted book:";
    cin>>noofstudents;
    cout<<bookallocation(books,noofstudents);
    return 0;
}