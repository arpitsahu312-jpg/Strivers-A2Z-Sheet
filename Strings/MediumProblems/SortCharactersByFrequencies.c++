#include<bits/stdc++.h>
using namespace std;
    string frequencySort(string s) {
       unordered_map<char,int>mpp1;
       for(auto i:s)
       {
        mpp1[i]++;
       }
       multimap<int,char>mpp2;
       for(auto i:mpp1)
       {
        mpp2.insert({i.second,i.first});
       }
       string ans="";
       for(auto it=mpp2.rbegin();it!=mpp2.rend();++it)
       {
          ans.append(it->first,it->second);
       }
       return ans;
    }

int main()
{
    cout<<"Enter the string:";
    string str;
    getline(cin,str);
    cout<<frequencySort(str);
    return 0;
}