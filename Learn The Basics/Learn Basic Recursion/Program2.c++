// Print name 5 times
#include<bits/stdc++.h>
using namespace std;

void Name(int cnt,string name)
{
    if(cnt==6) return;
    cnt++;
    cout<<name<<endl;
    Name(cnt,name);
}

int main()
{
    string name;
    cout<<"Enter your name:";
    getline(cin, name);
    Name(1,name);
    return 0;
}

