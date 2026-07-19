#include<bits/stdc++.h>
using namespace std;
    bool isIsomorphic(string s, string t) {
        int cnt;
        int size=s.size();
        unordered_map<char,char>mpp;
        unordered_map<char,char>mpp1;
        for(int i=0;i<size;i++)
        {
            if(mpp.find(s[i])==mpp.end() && mpp1.find(t[i])==mpp1.end())
            {
                mpp[s[i]]=t[i];
                mpp1[t[i]]=s[i];
            }
            else if(mpp[s[i]]!=t[i] || mpp1[t[i]] != s[i])
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
        cout<<isIsomorphic(str1,str2);
        return 0;
    }