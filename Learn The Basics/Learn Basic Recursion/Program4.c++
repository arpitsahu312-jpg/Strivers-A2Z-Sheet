// Print N to 1using Recursion

# include<bits/stdc++.h>
using namespace std;
void printnum(int N)
{
    if(N==0) return;
    cout<<N<<endl;
    N--;
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