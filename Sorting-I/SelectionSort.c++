// Selection sort Algorithm
/*
    1. Find the smallest element in the array
    2. Replace it with the element at index 0
    3. The array gets shorten by one value
    4. Repeat the process for the remaining array
*/

#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int arr[],int size)
{
    for(int k=0;k<size;k++)
    {
       int min=arr[k];
       int minindex=k;
       for(int i=k+1;i<size;i++)
       {
          if(arr[i]<min)
          {
            min=arr[i];
            minindex=i;
          }
       }
       arr[minindex]=arr[k];
       arr[k]=min;
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
    SelectionSort(arr,size);
    cout<<"The sorted array is:"<<endl;
    int i=0;
    do
    {
        cout<<arr[i]<<',';
        i++;
    } while (i != size);
    return 0;
}

// Time Complexity of the Selection Sort Algorithm - 0(N^2)