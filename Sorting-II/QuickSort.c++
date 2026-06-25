// Quick Sort
/*
   1.Pick a pivot element
   2.Seperate the array into two halfes 
   3.Such that elemnt greater than pivot are on right side & that less then pivot are on the left side
   4.Repeat the steps for the two halfes until you get a single element array
*/

#include<bits/stdc++.h>
using namespace std;

int quickSort(int left,int right,int arr[])
{
    int Pivot=arr[left];
    int l1=left;
    int r1=right;
    while(l1<r1)
    {
        while(arr[l1]<=Pivot && l1<=r1)
        {
            l1++;
        }
        while(arr[r1]>Pivot)
        {
            r1--;
        }
        if(l1<r1)
        {
        int temp=arr[r1];
        arr[r1]=arr[l1];
        arr[l1]=temp;
        }
    }
    int temp=arr[r1];
    arr[r1]=arr[left];
    arr[left]=temp;
    
    return r1;
}
void QuickSort(int left,int right,int arr[])
{
     if(left>=right)
     {
        return;
     }
     int r1=quickSort(left,right,arr);
     QuickSort(left,r1-1,arr);
     QuickSort(r1+1,right,arr);
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
    QuickSort(0,size-1,arr);
    cout<<"The sorted array is:"<<endl;
    int i=0;
    do
    {
        cout<<arr[i]<<',';
        i++;
    } while (i != size);
    return 0;
}

// Time Complexity -> O(NlogN) 
// Space Complexity -> O(1) 
// The worst case for quick sort occurs when the array is already sorted or reverse sorted -> O(N^2)
//QuickSort delivers its worst-case time complexity of $O(n^2)$ when the partition process consistently picks the extreme element (either the absolute smallest or the absolute largest) as the pivot.