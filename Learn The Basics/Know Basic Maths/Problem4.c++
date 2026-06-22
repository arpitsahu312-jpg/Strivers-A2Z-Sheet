// Find GCD of two numbers

// Eucildea Algorithm 
// gcd(a,b)=gcd(a-b,b) , a>b

// gcd(a,b)=gcd(a%b,b),a>b

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while(a>0 && b>0)
    {
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) return b;
    else return a;
}
int main()
{
    int a,b;
    cout<<"Enter two integers:";
    cin>>a>>b;
    cout<<"The gcd of "<<a<<","<<b<<" is:"<<gcd(a,b)<<endl;
    return 0;
}

// o(log(min(a,b)))