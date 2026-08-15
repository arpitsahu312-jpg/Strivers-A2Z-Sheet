#include<bits/stdc++.h>
using namespace std;

void backtrack(vector<string>&ans,string&str,string&current,int i)
{
   if(i==str.size())
   {
    ans.push_back(current);
    return;
   }
    current.push_back(str[i]);
    backtrack(ans,str,current,i+1);
    current.pop_back();
    backtrack(ans,str,current,i+1);
}

vector<string> powerset(string str)
{
    vector<string>ans;
    string current="";
    backtrack(ans,str,current,0);
    return ans;
}

int main()
{
    string str;
    cout<<"Enter the string"<<endl;
    getline(cin,str);
    vector<string>ans=powerset(str);
    for(const string&i:ans)
    {
        cout<<i<<',';
    }
    return 0;
}