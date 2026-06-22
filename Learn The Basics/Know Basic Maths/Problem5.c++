// Check if the Humber is Armstrong
#include<bits/stdc++.h>
using namespace std;
bool isArmstrong(int num)
{
    int sum=0;
    int x=num;
    while(x!=0)
    {
       sum=sum+pow((x%10),3);
       x=x/10;
    }
    if(sum==num)
    {
        return true;
    }
    return false;
}
int main()
{
    int num;
    cout<<"Enter an integer:";
    cin>>num;
    cout<< isArmstrong(num);
    return 0;
}