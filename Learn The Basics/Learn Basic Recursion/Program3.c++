// Print 1 to N using Recursion

# include<bits/stdc++.h>
using namespace std;
int cnt=1;
void printnum(int N)
{
    if(cnt==N+1) return;
    cout<<cnt<<endl;
    cnt++;
    printnum(N);
}

int main()
{
    int n;
    cout<<"Enter the integer N:";
    cin>>n;
    printnum(n);
    return 0;
}