//The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. 
#include<bits/stdc++.h>
using namespace std;

int fibonacci_number_optimized(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    int a=0,b=1;
    int fib;
    for(int i=2;i<=n;i++)
    {
       fib=a+b;
       a=b;
       b=fib;
    }
    return fib;
}

int fibonnacci_number_recursion(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    return fibonacci_number_optimized(n-1)+fibonacci_number_optimized(n-2);
}
int main()
{
    int n;
    cout<<"Enter the integer n:";
    cin>>n;
    cout<< fibonacci_number_optimized(n)<<endl;
    cout<< fibonnacci_number_recursion(n)<<endl;

}
