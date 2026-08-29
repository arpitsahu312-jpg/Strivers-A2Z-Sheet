#include<bits/stdc++.h>
using namespace std;

bool isPowerof2(int num)
{
    // for power of two the number of set bit should be exactly 1
    return ((num&(num-1))==0);
}

int main()
{
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    string str=isPowerof2(num)?"isPowerof2":"isNotPoweof2";
    cout<<str<<endl;
    
}