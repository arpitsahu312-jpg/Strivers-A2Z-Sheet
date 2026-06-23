// Recursion -> When a function call itself until a specifical condition is met.

// Stackoverflow -> segmentation fault -> numerous function calls waiting in recursion

// Base condition-> the condition used to stop the recursion call

// Recursion tree -> type of representation of recursion process

#include<bits/stdc++.h>
using namespace std;

void print(int count)
{
    if(count==4) return;
    cout<<count<<endl;
    count++;
    print(count);
}

int main()
{
    int count=0;
    print(count);
    return 0;
}


