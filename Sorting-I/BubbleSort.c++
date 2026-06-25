// Bubble Sort Algoritm
/*
   1.Compare adjacent elements
   2.Swap them if they are in wrong order
   3.Move on to the next pair for comparision
   4.Once the whole array is traversed
   5.Repeat the process for index 0 to n-1 instead
*/
// For optimising bubble Sort algorithm we main a swap cnt variable

#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int size)
{
    for(int k=0;k<size;k++)
    {
        int swapcnt=0;
        for(int i=0;i<size-1;i++)
        {
          if(arr[i]>arr[i+1])
          {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            swapcnt++;
          }
        }
        if(swapcnt==0)
        {
            return;
        }
        size--;
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
    BubbleSort(arr,size);
    cout<<"The sorted array is:"<<endl;
    int i=0;
    do
    {
        cout<<arr[i]<<',';
        i++;
    } while (i != size);
    return 0;
}

// Time Comlexity of BubbleSort is O(N) for best case and O(N^2) for the remaining cases 