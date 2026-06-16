#include<bits/stdc++.h>
using namespace std;
// we use array for storing multiple objects/ variables of similar data type
int main()
{
    int arr[5]; //  declaring the array
     cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
     cout<<arr[3]<<endl;
     arr[3]+=10;
     cout<<arr[3]<<endl;
     arr[2]=16;
     cout<<arr[2]<<endl;
     // values in an array are stored in continues memory

    // 2-D array
    int a[3][5];

    a[1][3]=78;
    cout<<a[1][3]<<endl;
    cout<<a[1][2]<<endl; // stores garbage value

   string s ="Striver";
   int len =s.size(); // returns size of the string
   s[len-1]= 'z';
   cout<<s<<endl;
    return 0;
}