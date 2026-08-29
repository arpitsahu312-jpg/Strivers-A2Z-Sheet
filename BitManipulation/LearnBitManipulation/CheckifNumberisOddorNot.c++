#include<bits/stdc++.h>
using namespace std;

bool isOdd(int num)
{
  return num&1;
}

int main()
{
   int num,i;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    string str=isOdd(num)?"isOdd":"isNotOdd";
    cout<<str<<endl;
    return 0;
}