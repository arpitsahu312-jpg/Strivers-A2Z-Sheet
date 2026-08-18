#include<bits/stdc++.h>
using namespace std;


    void backtrack(vector<string>& ans, string& path, const string& num, int target, int index, long long curr_val, long long prev_val) {
        if (index == num.size()) {
            if (curr_val == target) {
                ans.push_back(path);
            }
            return;
        }

        long long val = 0;
        int path_len = path.size();

        for (int i = index; i < num.size(); i++) {
            if (i != index && num[index] == '0') {
                break;
            }
            val = val * 10 + (num[i] - '0');
            string part = num.substr(index, i - index + 1);

            if (index == 0) {
                path.append(part);
                backtrack(ans, path, num, target, i + 1, val, val);
                path.resize(path_len);
            } else {
                path.push_back('+');
                path.append(part);
                backtrack(ans, path, num, target, i + 1, curr_val + val, val);
                path.resize(path_len); 

                path.push_back('-');
                path.append(part);
                backtrack(ans, path, num, target, i + 1, curr_val - val, -val);
                path.resize(path_len);

                path.push_back('*');
                path.append(part);
                backtrack(ans, path, num, target, i + 1, curr_val - prev_val + (prev_val * val), prev_val * val);
                path.resize(path_len); 
            }
        }
    }

    vector<string> addOperators(string num, int target) 
    {
        vector<string> ans;
        string path;
        path.reserve(num.size() * 2); 
        backtrack(ans, path, num, target, 0, 0, 0);
        return ans;
    }


    int main()
    {
        string num;
        int target;
        cout<<"Enter the string:"<<endl;
        getline(cin,num);
        cout<<"Enter the target"<<endl;
        cin>>target;
        vector<string>ans=addOperators(num,target);
        for(string i:ans)
        {
            cout<<i<<endl;
        }
        return 0;
    }

