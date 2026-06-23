// Reverse an array

#include<bits/stdc++.h>
using namespace std;

void reverse_array_optimised( int arr[], int size)
{
   for(int i=0;i<size/2;i++)
   {
    int temp= arr[i];
    arr[i]=arr[size-1-i];
    arr[size-1-i]=temp;
   }
   return;
}

int cnt=0;
void reverse_array_recursion(int arr[],int size)
{
    if(cnt==size/2) return;
    int temp= arr[cnt];
    arr[cnt]=arr[size-1-cnt];
    arr[size-1-cnt]=temp;
    size--;
    cnt++;
    reverse_array_recursion(arr,size);
}

int main()
{
    int size;
    cout<<"Enter the size of array:"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    // reverse_array_optimised(arr,size);
    reverse_array_recursion(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<',';
    }
    return 0;
}