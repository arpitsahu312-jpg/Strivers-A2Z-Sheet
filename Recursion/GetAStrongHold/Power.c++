#include<bits/stdc++.h>
using namespace std;

double power(double x, int n,double res)
{
  if(x==0)
  {
    return 0;
  }
  else if(n==0)
  {
    return res;
  }
  else if(n<0)
  {
    x=1/x;
    n=-n;
  }
  if(n%2==1)
  {
    res*=x;
  }
  x*=x;
  n/=2;
  return power(x,n,res);
}

int main()
{
    cout<<"Enter the value of x"<<endl;
    double x;
    cin>>x;
    cout<<"Enter the value of n"<<endl;
    int n;
    cin>>n;
    cout<<power(x,n,1)<<endl;
    return 0;
}