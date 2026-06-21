#include<bits/stdc++.h>
using namespace std;

void explainVector()
{
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2); //emplace_back is faster than push_back

    vector<pair<int,int>> vec;
    vec.push_back({1,2,});
    vec.emplace_back(1,2);

    vector<int> Vec(5,100); // {100,100,100,100,100}
    vector<int> V(5);
    vector<int> v1(5,20);
    vector<int> v2(v1); // copies v1 to v2 
    vector<int> VEC(5);

    vector<int> a={10,20,30,40};
    vector<int>::iterator it =a.begin();
    it++;
    cout<< *(it) << " ";
    cout<<"\n";

    it=it+2;
    cout<< *(it) <<" ";
    cout<<"\n";

    vector<int>::iterator it1=a.end();
    vector<int>::reverse_iterator it2=a.rend();
    vector<int>::reverse_iterator it3=a.rbegin();

    cout<< a[0] << " " << a.at(0);
    cout<<"\n";
    cout<< a.back() << " "; 
    cout<<"\n";

    for(vector<int>::iterator it4 =a.begin(); it4 != a.end();it4++)
    {
        cout<< *(it4) << " ";
    }
    
    cout<<"\n";
    
    for(auto it5 =a.begin(); it5 != a.end(); it5++)
    {
        cout<<*(it5)<<" ";
    }

    for(auto it6:a)
    {
        cout<< it6 <<" ";
    }
    
    cout<<"\n";

    //{10,20,12,23}
    vector<int> b={10,20,12,23};
    b.erase(b.begin()+1);

    //{10,20,12,23,35}
    vector<int> A={10,20,12,23,35};
    A.erase(A.begin()+2,A.begin()+4); // // {10,20,35} {start,end}

    //Insert Function

    vector<int> B(2,100); // {100,100}
    B.insert(B.begin(),300); // {300,100,100}
    B.insert(B.begin()+1,2,10); // {300,10,10,100,100}

    vector<int> copy(2,50); //{50,50}
    B.insert(B.begin(),copy.begin(),copy.end()); //{50,50,300,10,10,100,100}

    //{10,20}
    vector<int> C={10,20};
    cout<< C.size()<<endl;; // 2
    
    //{10,20}
    C.pop_back(); //{10}

    //v1 -> {10,20}
    //v2 -> {30,40}
    vector<int> V1 ={10,20};
    vector<int> V2={30,40};
    V1.swap(V2); // v1-> {30,40} , v2->{10,20}

    C.clear(); // erases the entire vector
    cout<< C.empty()<<endl;


}
int main()
{
    explainVector();
    return 0;
}