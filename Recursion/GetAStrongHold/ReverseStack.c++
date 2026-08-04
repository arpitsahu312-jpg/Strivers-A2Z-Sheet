#include<bits/stdc++.h>
using namespace std;

#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int>& S, int item) {
    if (S.empty()) {
        S.push(item);
        return;
    }
    int topElement = S.top();
    S.pop();
    
    insertAtBottom(S, item);
    S.push(topElement);
}

void reverseStackRecursive(stack<int>& S) {
    if (S.empty()) {
        return;
    }
    int topElement = S.top();
    S.pop();
    reverseStackRecursive(S);
    insertAtBottom(S, topElement);
}

int main()
{
    cout<<"Enter the size of the stack"<<endl;
    int n;
    cin>>n;
    stack<int>S1;
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        S1.push(k);
    }
    reverseStackRecursive(S1);
    for(int i=0;i<n;i++)
    {
        cout<<S1.top()<<',';
        S1.pop();
    }
    return 0;
}