#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    n--;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int k=1;k<=2*(n-i);k++)
        {
            cout<<' ';
        }
        for(int j=0;j<i;j++)
        {
            cout<<i-j;
        }
        cout<<'\n';
    }
    return 0;
}