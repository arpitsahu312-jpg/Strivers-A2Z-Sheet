// Print all divisors of a given number
#include<bits/stdc++.h>
using namespace std;
void divisor(int num)
{
    set<int> s;
    int divisor=1;
    while(divisor*divisor<=num)
    {
        if(num%divisor==0)
        {
          s.insert(divisor);
          s.insert(num/divisor);

        }
        divisor++;
    }
    for(auto i:s)
    {
        cout<<i<<',';
    }
}
int main()
{
    int num;
    cout<<"Enter the integer:";
    cin>>num;
    divisor(num);
    return 0;
}