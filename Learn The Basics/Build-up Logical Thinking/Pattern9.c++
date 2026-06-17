#include<bits/stdc++.h>
using namespace std;
int main()
{  
   int n;
   cout<<"Enter the value of integer n"<<endl;
   int star=1;
   int space=n-1;
   cin>>n;
   for(int i=1;i<=2*n;i++)
   {
    for(int k=1;k<=space;k++)
    {
      cout<<' ';
    }
    for(int j=1;j<=star;j++)
    {
      cout<<'*';
    }
    if(i<n)
    {
      space=space-2;
      star=star+2;
    }
    else if(i==n)
    {
       space=space;
       star=star;
    }
    else
    {
        space=space+2;
        star=star-2;
    }
    cout<<'\n';
    }
    return 0;
}
