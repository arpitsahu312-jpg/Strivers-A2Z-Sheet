#include<bits/stdc++.h>
using namespace std;

void backtrack(vector<string>& ans, string& current, int open, int close, int max) {
    if (current.length() == max * 2) {
        ans.push_back(current);
        return;
    }
    if (open < max) {
        current.push_back('(');
        backtrack(ans, current, open + 1, close, max);
        current.pop_back(); 
    }
    if (close < open) {
        current.push_back(')');
        backtrack(ans, current, open, close + 1, max);
        current.pop_back(); 
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> ans;
    string current = "";
    backtrack(ans, current, 0, 0, n);
    return ans;
}



int main() {
    int n;
    cout << "Enter the length of bit string: \n";
    cin >> n;
    vector<string> ans;
    ans=generateParenthesis(n);
    for (const string& s : ans) {
        cout << s << ", ";
    }
    cout << endl;
    return 0;
}