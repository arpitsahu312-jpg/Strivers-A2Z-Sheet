#include<bits/stdc++.h>
using namespace std;

int minCut(string s) {
    int n=s.size();
    vector<vector<bool>> isPal(n, vector<bool>(n, false));
    for (int i = n - 1; i >= 0; i--) {
        for (int j = i; j < n; j++) {
            if (s[i] == s[j] && (j - i <= 2 || isPal[i + 1][j - 1])) {
                isPal[i][j] = true;
            }
        }
    }
    vector<int>dp(n+1,0);
    for(int i=n-1;i>=0;i--)
    {
        int mincost=n;
        for(int j=i;j<n;j++)
        {
            if(isPal[i][j])
            {
                mincost=min(mincost,1+dp[j+1]);
            }
        }
        dp[i]=mincost;
    }
    return dp[0]-1;
}

int main()
{
    string str;
    cout<<"Enter the string:"<<endl;
    getline(cin,str);
    cout<<minCut(str)<<endl;
    return 0;
}