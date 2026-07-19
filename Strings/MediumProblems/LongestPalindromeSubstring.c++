#include<bits/stdc++.h>
using namespace std;

    string longestPalindrome(string s) {
        int size = s.size();
        if (size < 2) return s;
        int maxlen = 1;
        int start = 0;
        for (int i = 0; i < size; ) {
            if (size - i <= maxlen / 2) {
                break; 
            }
            int left = i;
            int right = i;
            while (right < size - 1 && s[right] == s[right + 1]) {
                right++;
            }
            i = right + 1; 
            while (left > 0 && right < size - 1 && s[left - 1] == s[right + 1]) {
                left--;
                right++;
            }
            int currentLen = right - left + 1;
            if (currentLen > maxlen) {
                start = left;
                maxlen = currentLen;
            }
        }
        return s.substr(start, maxlen);
    }

    int main()
    {
    cout<<"Enter the string:";
    string str;
    getline(cin,str);
    cout<<longestPalindrome(str);
    return 0;
    }