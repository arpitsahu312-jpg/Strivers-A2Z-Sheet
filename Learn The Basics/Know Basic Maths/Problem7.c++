// Check for prime number
#include<bits/stdc++.h>
using namespace std;

bool isprime(int num)
{
   int x=2;
   while(x*x<=num)
   {
    if(num%x==0)
    {
        return false;
    }
    x++;
   }
   return true;
}

int main()
{
    int num;
    cout<<"Enter the integer:";
    cin>>num;
    cout<<isprime(num);
    return 0;
}