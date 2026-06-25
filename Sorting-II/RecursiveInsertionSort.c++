#include<bits/stdc++.h>
using namespace std;

void RecursiveInsertionSort(int arr[],int k, int size)
{
  if(k==size)
  {
    return;
  }
  int i=k;
  while(arr[i-1]>arr[i] && i!=0)
  {
    int temp=arr[i];
    arr[i]=arr[i-1];
    arr[i-1]=temp;
    i--;
  }
  RecursiveInsertionSort(arr,k+1,size);
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
    RecursiveInsertionSort(arr,0,size);
    cout<<"The sorted array is:"<<endl;
    int i=0;
    do
    {
        cout<<arr[i]<<',';
        i++;
    } while (i != size);
    return 0;
}