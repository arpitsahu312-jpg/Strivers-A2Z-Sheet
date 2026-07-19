#include<bits/stdc++.h>
using namespace std;
    int maxDepth(string s) {
        int cnt=0;
        int MaxDepth=0;
        int size=s.size();
        for(int i=0;i<size;i++)
        {
            if(s[i]=='(')
            {
                cnt++;
            }
            else if(s[i]==')')
            {
                MaxDepth=max(MaxDepth,cnt);
                cnt--;
            }
        }
        return MaxDepth;
    }
int main()
{
    cout<<"Enter the string:";
    string str;
    getline(cin,str);
    cout<<"Enter the value of k:";
    cout<<maxDepth(str);
    return 0;
}