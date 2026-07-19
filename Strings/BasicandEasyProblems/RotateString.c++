 #include<bits/stdc++.h>
using namespace std;


 bool rotateString(string s, string goal) {
        return s.size() == goal.size() && (s + s).find(goal) != std::string::npos;
    }

int main()
    {
        cout<<"Enter the string:";
        string str1;
        getline(cin,str1);
        cout<<"Enter the string:";
        string str2;
        getline(cin,str2);
        cout<<rotateString(str1,str2);
        return 0;
    }