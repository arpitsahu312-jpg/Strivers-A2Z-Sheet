#include<bits/stdc++.h>
using namespace std;

    string reverseWords(string s) {
        vector<string>words;
        string word="";
        for(int i=0;i<s.size();i++)
        {
           if(s[i]==' ')
           {
              if(!word.empty())words.push_back(word);
              word="";
           }
           else{
           word+=s[i];
           }
        }
        if(!word.empty())words.push_back(word);
        string ans="";
        int size=words.size();
        for(int i=size-1;i>-1;i--)
        {
            ans+=words[i];
            if(i>0) ans+=" ";
        }
        return ans;
    }

    int main()
    {
        cout<<"Enter the string:";
        string str;
        getline(cin,str);
        cout<<reverseWords(str);
        return 0;
    }
