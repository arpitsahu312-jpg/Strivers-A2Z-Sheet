#include<bits/stdc++.h>
using namespace std;

int noofsetbit(int num)
{
  int count=0;
  while(num!=0)
  {
    num=num&(num-1);
    count++;
  }
  return count;
}

int main()
{
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    cout<<"The number of set bits are:"<<noofsetbit(num)<<endl;
}