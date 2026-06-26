#include<bits/stdc++.h>
using namespace std;

int SecondLargestElement(int arr[],int size)
{
    int max=arr[0];
    int smax=0;
    for(int i=1;i<size;i++)
    {
        if(arr[i]>max)
        {
            smax=max;
            max=arr[i];
        }
        else if(arr[i]>smax)
        {
             smax=arr[i];
        }
    }
    if(smax==max) return 0;
    return smax;
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
    cout<<"The secound largest element in the array is:"<<SecondLargestElement(arr,size)<<endl;
    return 0;
}