#include<bits/stdc++.h>
using namespace std;

bool checkifithbitisset(int num,int i)
{
  return (num>>i)&1;
}

int main()
{
   int num,i;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    cout<<"Enter the bit number to be checked"<<endl;
    cin>>i;
    string str=checkifithbitisset(num,i)?"isSet":"isNotSet";
    cout<<str<<endl;
    return 0;
}