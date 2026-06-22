//Reverse a number
#include<bits/stdc++.h>
using namespace std;
int reversenumber(int num)
{
    int r_num=0;
    while(num>0)
    {
        r_num=r_num*10+ num%10;
        num=num/10;
    }
    return r_num;
}
int main()
{
    int num;
    cout<<"Enter an integer:"<<endl;
    cin>>num;
    cout<<"The reverse integer is: "<<reversenumber(num)<<endl;
    return 0;
}