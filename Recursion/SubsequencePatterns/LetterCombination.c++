#include<bits/stdc++.h>
using namespace std;

void BackTracking(vector<string>& ans,string& current,string target,vector<string>&mpp,int start)
    {
        if(start==target.size())
        {
            ans.push_back(current);
           return;
        }
        for(char j:mpp[target[start]-'2'])
        {
            current.push_back(j);
            BackTracking(ans, current,target,mpp,start+1);
            current.pop_back(); 
        }
    }

vector<string> LetterCombination(string target) {
    vector<string> ans;
    string current;
    vector<string>mpp={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    BackTracking(ans,current,target,mpp,0);
    return ans;
}

int main()
{
    string k;
    cout<<"Enter the target sum"<<endl;
    getline(cin,k);
    vector<string> ans=LetterCombination(k);
     for(auto i:ans)
     {
       cout<<i<<",";
     }
     cout<<endl;
    return 0;
}
