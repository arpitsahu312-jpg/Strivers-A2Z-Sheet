// Insertion Sort
/*
   1.Start from index 1
   2.Compare it with the guys on its left
   3.Place it at its exact position such that guys doward its left are leser than the element
   4.Keep on repeating the process till n
*/

#include<bits/stdc++.h>
using namespace std;
 void InsertionSort(int arr[], int size)
 {
    for(int i=1;i<size;i++)
    {
        int k=i;
        while(arr[k-1]>arr[k] && k>0)
        {
            int temp=arr[k];
          arr[k]=arr[k-1];
          arr[k-1]=temp;
          k--;
        }
    }
    return ;
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
    InsertionSort(arr,size);
    cout<<"The sorted array is:"<<endl;
    int i=0;
    do
    {
        cout<<arr[i]<<',';
        i++;
    } while (i != size);
    return 0;
}

// Time Complexity- O(N) for best case and O(N^2) for the other cases 