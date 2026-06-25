#include<bits/stdc++.h>
using namespace std;

void RecursiveBubbleSort(int arr[],int size)
{
    if(size==0)
    {
        return;
    }
    int cnt=0;
    for(int i=0;i<size-1;i++)
    {
      if(arr[i]>arr[i+1])
      {
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        cnt++;
      }
    }
    if(cnt>0)
    {
       RecursiveBubbleSort(arr,size-1);
    }
    return;
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
    RecursiveBubbleSort(arr,size);
    cout<<"The sorted array is:"<<endl;
    int i=0;
    do
    {
        cout<<arr[i]<<',';
        i++;
    } while (i != size);
    return 0;
}