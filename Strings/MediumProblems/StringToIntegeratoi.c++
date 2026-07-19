#include<bits/stdc++.h>
using namespace std;

int myAtoi(string s) {
        int i = 0;
        int n = s.size();
        
        while (i < n && s[i] == ' ') {
            i++;
        }
        
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        
        long long num = 0;
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            num = num * 10 + (s[i] - '0');
            
            if (sign == 1 && num > INT_MAX) return INT_MAX;
            if (sign == -1 && -num < INT_MIN) return INT_MIN;
            
            i++;
        }
        
        return num * sign;
    }

    int main()
    {
    cout<<"Enter the string:";
    string str;
    getline(cin,str);
    cout<<myAtoi(str);
    return 0;
    }