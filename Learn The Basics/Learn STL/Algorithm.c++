#include<bits/stdc++.h>
using namespace std;


bool comp(pair<int,int>p1,pair<int,int>p2)
{
    if(p1.second< p2.second)
    {
        return true;
    }
    else if (p1.second > p2.second)
    {
       return false;
    }
    else
    {
        if(p1.first > p2.first)
        {
            return true;
        }
        return false;
    }
}

void explainExtra()
{
    int a[]={1,20,10,25,15};
    sort(a,a+4);
    vector<int> v={20,22,11,10,2,6,100};
    sort(v.begin(),v.end());

    sort(a+2,a+4);
    sort(a,a+4, greater<int>());

    pair<int,int> A[]={{1,2},{2,1},{4,1}};

    // sort it according to second element
    // if second element is same , then sort it according to the first element but in descending order

    sort(A,A+2,comp);     //  comp-> self written boolean return function
     //{4,1},{2,1},{1,2}

    int num=7;
    int cnt =__builtin_popcount(7); // it returns no of set bits i.e no of ones in the binary form

    long long num1=165786578687;
    int cnt_ =__builtin_popcountll(num1);

    string s="123";
    do{
        cout<< s << endl;
    }
    while(next_permutation(s.begin(),s.end()));

    int maxi= *max_element(a,a+4);
}

int main()
{
    explainExtra();
    return 0;
}