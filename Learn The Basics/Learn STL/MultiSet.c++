#include<bits/stdc++.h>
using namespace std;
void explainMultiSet()
{
    //Everything is same as set
    // only stores duplicate element also

    multiset<int>ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}

    ms.erase(1); // all 1's erased
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    int cnt =ms.count(1);

    // only a single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1),next(ms.find(1),2));
    
    // rest all functions are same
}
int main()
{
    explainMultiSet();
    return 0;
}