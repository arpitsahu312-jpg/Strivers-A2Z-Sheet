#include<bits/stdc++.h>
using namespace std;

    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(prefix) != 0) {
                prefix.pop_back();
            }
        }
        return prefix;
    }


int main()
    {
        int n;
        cout<<"Enter the size of vector:";
        cin>>n;
        cin.ignore();
        vector<string> Vec(n);
        cout<<"Enter the strings: \n";
        for(int i=0;i<n;i++)
        {
            string str;
            getline(cin,str);
            Vec[i]=str;
        }
        cout<<longestCommonPrefix(Vec);
        return 0;
    }