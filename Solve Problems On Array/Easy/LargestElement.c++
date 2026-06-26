// To find the largest element in the given array

#include<bits/stdc++.h>
using namespace std;

int LargestElement(int arr[],int size)
{
    int maxelem=arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]>maxelem)
        {
            maxelem=arr[i];
        }
    }
    return maxelem;
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
    cout<<"The largest element in the array is:"<<LargestElement(arr,size)<<endl;
    return 0;
}