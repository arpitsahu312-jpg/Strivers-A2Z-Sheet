#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of the integer n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            char c='A'+j;
            cout<<c;
        }
        cout<<'\n';
    }
    return 0;
}