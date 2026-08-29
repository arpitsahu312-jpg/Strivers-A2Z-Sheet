#include<bits/stdc++.h>
using namespace std;

void SetUnsetRightMostUnsetBit(int& num)
{
    num=num|(num+1);
    return;
}

int main()
{
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    SetUnsetRightMostUnsetBit(num);
    cout<<num<<endl;
    return 0;
}