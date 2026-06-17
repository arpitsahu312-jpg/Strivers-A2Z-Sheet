#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int star=n,space=0;
    for(int i=1;i<=2*n;i++)
    {
        for(int j=0;j<star;j++)
        {
            cout<<'*';
        }
        for(int k=0;k<space;k++)
        {
            cout<<' ';
        }
        for(int l=0;l<star;l++)
        {
            cout<<'*';
        }
        cout<<'\n';
        if(i<n)
        {
            star--;
            space=space+2;
        }
        else if (i==n)
        {
            star=star;
            space=space;
        }
        else{
            star++;
            space=space-2;
        }
    }

    return 0;
}