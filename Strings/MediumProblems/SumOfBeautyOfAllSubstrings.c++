#include<bits/stdc++.h>
using namespace std;

    int beautySum(string s) {
        int ans = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            int freq[26] = {};
            for (int j = i; j < n; j++) {
                ++freq[s[j] - 'a'];
                int mn = INT_MAX;
                int mx = 0;
                for (int k = 0; k < 26; k++) {
                    if (!freq[k]) continue;
                    if (freq[k] > mx) mx = freq[k];
                    if (freq[k] < mn) mn = freq[k];
                }
                ans += mx - mn;
            }
        }
        return ans;
    }

    int main()
    {
    cout<<"Enter the string:";
    string str;
    getline(cin,str);
    cout<<beautySum(str);
    return 0;
    }