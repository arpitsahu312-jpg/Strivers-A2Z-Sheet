#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int k=1;
    int n;
    cout<<"Enter the value of the integer n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<k;
            k=k^1;
        }
        cout<<'\n';
    }
    return 0;
}