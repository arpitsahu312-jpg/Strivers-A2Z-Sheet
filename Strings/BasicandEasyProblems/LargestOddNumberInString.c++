#include<bits/stdc++.h>
using namespace std;

    string largestOddNumber(string num) {
        int size=num.size();
        int index=-1;
        for(int i=size-1;i>-1;i--)
        {
           if((num[i]-'0')%2!=0)
           {
              return num.substr(0,i+1);;
           }
        }
        return "";
    }

    int main()
    {
        cout<<"Enter the string:";
        string str;
        getline(cin,str);
        cout<<largestOddNumber(str);
        return 0;
    }