#include<bits/stdc++.h>
using namespace std;

void generateBinarystring(string& str, int n, vector<string>& ans) {
    // Base case: if string reaches the target length
    if (str.length() == n) {
        ans.push_back(str);
        return;
    }
    str.push_back('0');
    generateBinarystring(str, n, ans);
    str.pop_back();
    if (str.empty() || str.back() == '0') {
        str.push_back('1');
        generateBinarystring(str, n, ans);
        str.pop_back();
    }
}

int main() {
    int n;
    cout << "Enter the length of bit string: \n";
    cin >> n;
    
    vector<string> ans;
    string str = "";
    generateBinarystring(str, n, ans);
    for (const string& s : ans) {
        cout << s << ", ";
    }
    cout << endl;
    return 0;
}