#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            cout<<' ';
        }
        for(int k=0;k<i;k++)
        {
            char ch='A'+k;
            cout<<ch;
        }
        for(int l=1;l<i;l++)
        {
            char ch='A'+l-1;
            cout<<ch;
        }
        cout<<'\n';
    }

    return 0;
}