#include<bits/stdc++.h>
using namespace std;
 void explainStack()
 {
   //LIFO
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(3); // {3,3,2,1}
    st.emplace(5); //{5,3,3,2,1}

    cout<< st.top()<<endl; // print 5 "** st[2] is invalid**"
     st.pop(); // st looks like {3,3,2,1}

     cout<< st.top()<<endl; //3
     cout<< st.size()<<endl; // 4
     cout<<st.empty();

     stack<int> st1,st2;
     st1.swap(st2);
 }
 int main()
 {
    explainStack();
    return 0;
 }