// Merge Sort Algorithm
/*
   1.It works on divide and merge approch
   2.First we divide the array into parts 
   3.Till it reduces to single elments by dividing it in parts left and right
   4.Then we start merging the left and right parts
*/

#include<bits/stdc++.h>
using namespace std;

void Merge(int left,int mid,int right,int arr[])
{
    vector<int> vec;
    int l1=left;
    int r1=mid+1;
    while(l1 != mid+1 && r1 != right+1)
    {
        if(arr[l1]<=arr[r1])
        {
          vec.emplace_back(arr[l1]);
          l1++;
        }

        else
        {
            vec.emplace_back(arr[r1]);
            r1++;
        }
    }

     while(r1 != right+1  && l1 == mid+1)
        {
            vec.emplace_back(arr[r1]);
            r1++;
        }
    while(l1 != mid+1 && r1 ==right+1)
        {
            vec.emplace_back(arr[l1]);
            l1++;
        }
    int k=0;
    for(int i=left;i<=right;i++)
    {
       arr[i]=vec[k];
       k++;
    }
}
void MergeSort(int left,int right,int arr[])
{
    if(left==right)
    {
        return;
    }
    int mid=left+(right-left)/2;
    MergeSort(left,mid,arr);
    MergeSort(mid+1,right,arr);
    Merge(left,mid,right,arr);
}

int main()
{
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<size;i++)
    {
       cin>>arr[i];
    }
    MergeSort(0,size-1,arr);
    cout<<"The sorted array is:"<<endl;
    int i=0;
    do
    {
        cout<<arr[i]<<',';
        i++;
    } while (i != size);
    return 0;
}

// Time Complexity -> O(NlogN) for all cases 
// Space Complexity -> O(N)