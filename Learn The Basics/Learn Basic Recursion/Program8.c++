// A phrase is  a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters , it reads the same forwad and backward.

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    if(s==" ")
    {
        return true;
    }
    auto p1=s.begin();
    auto p2=s.end();
    p2--;
    while(p1<p2)
    {
        if(!(isalnum(*p1)))
        {
            p1++;
        }
        if(!(isalnum(*p2)))
        {
            p2--;
        }
        else if(tolower(*p1) != tolower(*p2))
        {
            return false;
        }
        else
        {
            p1++;
            p2--;
        }
    }
    return true;
}
int main()
{
    cout<<"Enter a string"<<endl;
    string s;
    getline(cin,s);
    cout<<isPalindrome(s)<<endl;
    return 0;
}