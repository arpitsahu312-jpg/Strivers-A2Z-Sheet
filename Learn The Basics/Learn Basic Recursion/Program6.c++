// Factorial of a given number

#include<bits/stdc++.h>
using namespace std;


long factorial_optimised(int num)
{
    long fact=1;
    for(int i=2;i<=num;i++)
    {
      fact=fact*i;
    }
    return fact;
}

long factorial=1;
long factorial_recursion(int num)
{
    if(num==1) return factorial;
    factorial=factorial*num;
    num--;
    factorial_recursion(num);
}

int main()
{
    int n;
    cout<<"Enter the integer n:";
    cin>>n;
    cout<<factorial_optimised(n)<<endl;
    cout<<factorial_recursion(n)<<endl;
    return 0;
}