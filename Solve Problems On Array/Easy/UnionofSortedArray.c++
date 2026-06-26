//Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.

//The union of two arrays can be defined as the common and distinct elements in the two arrays.

#include<bits/stdc++.h>
using namespace std;

void Union(int arr1[],int size1,int arr2[],int size2)
{
    vector<int> vec;
    int p1=0;
    int p2=0;
    while(p1 != size1 &&  p2!= size2)
    {
        if(arr1[p1]<=arr2[p2])
        {
            vec.emplace_back(arr1[p1]);
            p1++;
        }

        else
        {
            vec.emplace_back(arr2[p2]);
            p2++;
        }
    }

    if(p1 == size1 && p2 !=size2)
    {
        while(p2 !=size2)
        {
            vec.emplace_back(arr2[p2]);
            p2++;
        }
    }
    
    else  if(p1 != size1 && p2 ==size2)
    {
        while(p1 ==size1)
        {
            vec.emplace_back(arr1[p1]);
            p1++;
        }
    }

    cout<<"The union of the two arrays is:"<<endl;
    for(int i:vec)
    {
        cout<<i<<',';
    }
    return;

}

int main()
{
 int size1;
    cout<<"Enter the size of array:";
    cin>>size1;
    int arr1[size1];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<size1;i++)
    {
       cin>>arr1[i];
    }
    
    int size2;
    cout<<"Enter the size of array:";
    cin>>size2;
    int arr2[size2];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<size2;i++)
    {
       cin>>arr2[i];
    }

    Union(arr1,size1,arr2,size2);
    return 0;
}