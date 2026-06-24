// hashing-> pre storing/fetching

// Given an array and the numbers whoes frequency you need to find in given array

#include<bits/stdc++.h>
using namespace std;

int number_hashing()
{
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    int arr[size];
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int freq[13]={0};
    for(auto i:arr)
    {   
        freq[i]++;
    }
    int n;
    cout<<"Enter the no of numbers to find frequency of:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        cout<<"The element "<<num<<" occurs "<<freq[num]<<" times in the array"<<endl;
    }
    return 0;
}

int main()
{   int size;
    cout<<"Enter the size of array:";
    cin>>size;
    char arr[size];
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int freq[32]={0};
    for(auto i:arr)
    {   
        int ch;
        if(isupper(i))  ch=i-'A';
        else ch=i-'a';
        freq[ch]++;
    }
    int n;
    cout<<"Enter the no of numbers to find frequency of:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char C;
        cin>>C;
        int num;
        if(isupper(C)) num=C-'A';
        else num=C-'a';
        cout<<freq[num]<<endl;
    }
    return 0;
}

// The maximum size of integer array that can be declared inside main function is 10^6 and 10^7  as global.

//The maximum size of boolean array that can be declared inside main function is 10^7 and 10^8 as global.

// number hashing -> arrays
// character hashing -> arrays

// Ascii value of a to z is 97-122
// Ascii value of A to Z is 65-90
