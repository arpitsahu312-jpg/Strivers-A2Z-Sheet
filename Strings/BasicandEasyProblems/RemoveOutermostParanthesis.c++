#include<bits/stdc++.h>
using namespace std;

    string removeOuterParentheses(string s) {
    int size=s.size();
    int cnt=-1;
    string ans="";
    for(int i=0;i<size;i++)
    {
        if(s[i]=='(')
        {
            if(cnt>=0) ans.push_back('(');
            cnt++;
        }
        else if(s[i]==')')
        {
            if(cnt>0) ans.push_back(')');
            cnt--;
        }
    }
    return ans;
    }

    int main()
    {
        cout<<"Enter the string:";
        string str;
        getline(cin,str);
        cout<<removeOuterParentheses(str);
        return 0;
    }
