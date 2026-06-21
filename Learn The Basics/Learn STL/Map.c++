#include<bits/stdc++.h>
using namespace std;
void explainMap()
{
    // keys are unique and stored in order
    map<int,int> mpp;
    map<int, pair<int,int>> mpp1;
    map<pair<int,int>,int> mpp2;

    mpp[1]=2;
    mpp.emplace(3,1);
    mpp.insert({2,4});

    mpp2[{2,3}]=10;

    for(auto it : mpp )
    {
        cout<< it.first << " "<< it.second <<endl;
    }

    cout<<mpp[1]<<endl;
    cout<<mpp[5]<<endl;

    auto it= mpp.find(3);
    cout<< it->second<<endl;

    auto IT =mpp.find(5);
    
    //This is the syntax
    auto it1=mpp.lower_bound(2);
    auto it2=mpp.upper_bound(3);

    // erase ,swap,size,empty are same as above
}

void explainMultimap()
{
    // everything same as map , only it can store mutiple keys
    // only mpp[key] cannot be used here
}

void explainUnorderedMap()
{
    // Same as set and unordered_set difference
}

int main()
{
    explainMap();
    return 0;
}