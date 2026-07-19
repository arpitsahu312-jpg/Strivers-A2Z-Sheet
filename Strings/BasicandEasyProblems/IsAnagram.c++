#include<bits/stdc++.h>
using namespace std;
     bool isAnagram(string s, string t) {
       if(s.size()!=t.size()) return false;
       int n=s.size();
       int ans[26]={0};
       for(int i=0;i<n;i++)
       {
         ans[s[i]-'a']++;
         ans[t[i]-'a']--;
       }
       for(int i=0;i<26;i++)
       {
        if(ans[i]!=0)
        {
            return false;
        }
       }
       return true;
    }
int main()
    {
        cout<<"Enter the string:";
        string str1;
        getline(cin,str1);
        cout<<"Enter the string:";
        string str2;
        getline(cin,str2);
        cout<<isAnagram(str1,str2);
        return 0;
    }