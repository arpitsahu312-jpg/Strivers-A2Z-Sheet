#include<bits/stdc++.h>
using namespace std;

void swaptwonumbers(int& a, int& b)
{
    a=a^b;
    b=a^b;
    a=a^b;
    return;
}

int main()
{
    int a,b;
    cout<<"Enter the values of a & b"<<endl;
    cin>>a>>b;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    cout<<"After swapping"<<endl;
    swaptwonumbers(a,b);
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    return 0;
}