// Palindrome Number
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
    int num=x;
    if(num<0)
    {
        return false;
    }
    long r_num=0;
    while(num!=0)
    {
        r_num=r_num*10+ num%10;
        num=num/10;
        if(r_num>=INT_MAX){
            return 0;
        }
    }
    if(r_num!=x)
    {
        return false;
    }
    return true;

}
int main()
{
    int num;
    cout<<"Enter the integer:";
    cin>>num;
    cout<< isPalindrome(num);
    return 0;
}