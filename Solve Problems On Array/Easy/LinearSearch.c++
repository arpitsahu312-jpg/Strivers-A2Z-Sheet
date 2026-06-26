//Given an array, and an element num the task is to find if num is present in the given array or not. If present print the index of the element or print -1.

#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[],int size,int elem)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==elem)
        {
            return i;
        }
    }
    return -1;
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
    int elem;
    cout<<"Enter the element to be searched"<<endl;
    cin>>elem;
    cout<<LinearSearch(arr,size,elem)<<endl;
    return 0;
}

