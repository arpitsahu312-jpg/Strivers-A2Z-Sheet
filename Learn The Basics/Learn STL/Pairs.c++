//STL - Standar template library

//Pairs
#include<bits/stdc++.h>
using namespace std;
void expainPair()
{
    pair<int,int> p={1,3};
    cout<< p.first << " " << p.second;
    pair<int, pair<int,int> > p1= {1,{3,4}}; // Nested Pair
    cout<< p1.first <<" "<< p1.second.second << " " << p1.second.first;
    pair<int ,int > arr[] ={{1,2},{2,5},{5,1}};
    cout<< arr[1].second;
}
int main()
{
    expainPair();
    return 0;
}