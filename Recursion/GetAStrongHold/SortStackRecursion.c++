#include<bits/stdc++.h>
using namespace std;

void insertAt(stack<int>& S, int item) {
    if (S.empty()) {
        S.push(item);
        return;
    }
    if(S.top()<=item)
    {
        S.push(item);
        return;
    }
    int topElement = S.top();
    S.pop();
    insertAt(S, item);
    S.push(topElement);
}

void SortStackRecursion(stack<int>&S1)
{
   if(S1.empty())
   {
    return;
   }
   int TopElement=S1.top();
   S1.pop();
   SortStackRecursion(S1);
   insertAt(S1,TopElement);
   return;
}

int main()
{
    stack<int>S1;
    cout<<"Enter the size of stack:"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        S1.push(k);
    }
    SortStackRecursion(S1);
    for(int i=0;i<n;i++)
    {
        int k=S1.top();
        S1.pop();
        cout<<k<<',';
    }
    return 0;
}