// Count all the Digits of a number

#include<bits/stdc++.h>
using namespace std;
int countdigits(int num)
{
    int count=0;
    while(num>0)
    {
     count++;
     num=num/10;
    }
    return count;
}
int main()
{
    int num;
    cout<<"Enter the integer"<<endl;
    cin>>num;
    cout<<"No of digits in "<<num<< " are "<<countdigits(num);
    return 0;
}