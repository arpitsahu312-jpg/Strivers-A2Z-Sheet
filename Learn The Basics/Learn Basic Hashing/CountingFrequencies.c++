// Given an array , we have to found the number of occurences of each element in the array

#include<bits/stdc++.h>
using namespace std;

void Count_frequencies(int arr[],int size)
{
    unordered_map<int,int> mpp;
    for(int i=0;i<size;i++)
    {
        mpp[arr[i]]++;
    }
    for(auto i:mpp)
    {
        cout<< i.first <<" occurs " << i.second <<" times in the array"<<endl;
    }
    return;
}

int main()
{
    int size;
    cout<<"Enter the size of array:";
    int arr[size];
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    Count_frequencies(arr,size);
    return 0;
}