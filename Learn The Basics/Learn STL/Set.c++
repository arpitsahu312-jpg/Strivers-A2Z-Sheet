#include<bits/stdc++.h>
using namespace std;
void explainSet()
{
    // sorted & unique
    set<int>st;
    st.insert(1); //{1}
    st.emplace(2); //{1,2}
    st.insert(2); //{1,2}
    st.insert(4); //{1,2}
    st.insert(3); //{1,2,3,4}

    // Functionality of insert in vector 
    // can be used also, that only increases
    // efficiency

    // begin(),end(),rbegin(),rend(),rsize(),
    // empty() and swap() are same as those of above

    //{1,2,3,4,5}
    auto it=st.find(3); // if element is not present it returns end iterator
    //{1,2,3,4,5}
    auto it1=st.find(6);

    // {1,4,5}
    st.erase(5); // erase 5 // takes logirithmic time

    int cnt=st.count(1);
    auto it2=st.find(3);
    st.erase(it); // it takes constant time

    //{1,2,3,4,5}
    auto it3=st.find(2);
    auto it4=st.find(4);
    st.erase(it3,it4); // after erase {1,4,5} [first,last]

    // lower_bound() and upper_bound() functions works in the same way
    // as in vector it does.

    // This is the syntax
    auto it5 =st.lower_bound(2);
    auto it6 =st.upper_bound(3);
}
int main()
{
    explainSet();
    return 0;
}