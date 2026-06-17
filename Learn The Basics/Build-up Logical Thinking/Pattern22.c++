#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int star=1,space=2*(n-1)-1;
    for(int i=1;i<=2*n-1;i++)
    {
        if(i==1 || i==2*n-1)
        {
            for(int m=0;m<2*n-1;m++)
            {
                cout<<n;
            }
            cout<<'\n';
        }
        else{
        for(int j=0;j<star;j++)
        {
            cout<<n-j;
        }
        for(int k=0;k<space;k++)
        {
            cout<<n-t;
        }
        for(int l=0;l<star;l++)
        {
            cout<<n-t+l+1;
        }
        cout<<'\n';
        if(i<n)
        {
            star++;
            t++;
            space=space-2;
        }
        else{
            star--;
            t--;
            space=space+2;
        }
    }
}
    

    return 0;
}