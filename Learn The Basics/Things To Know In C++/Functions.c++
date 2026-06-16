#include<bits/stdc++.h>
using namespace std;
// Functions are set of code which perform something for you
// Functions are used to modularise the code
// Functions are used top increase readability
// Functions are used to use same code multiple times

// void -> which does not returns anything
// return
// parameterised
// non parameterised

void printName(string s){
    cout<<"hey "<<s<<"!"<<endl;
}
int main()
{
    string name;
    cin>>name;
    printName(name);

    string name2;
    cin>>name;
    printName(name2);
    return 0;
}

//Take two numbers and print its sum
int Sum()
{
    int num1,num2;
    cout<<"enter two numbers"<<endl;
    cin>>num1>>num2;
    cout<<"Sum="<<num1+num2<<endl;
    return num1+num2;
}
int maximum(int num1, int num2)
{
    if(num1>num2) return num1;
    else return num2;
}
int minimum(int num1,int num2)
{
    if(num1>num2) return num2;
    else return num1;
}
int main()
{
    Sum();
    cout<<maximum(5,6)<<endl;
    cout<<minimum(5,6)<<endl;
    return 0;
}

// pass by value
void doSomething(int num)
{
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}

int main()
{
    int num=10;
    doSomething(num);
    cout<<num<<endl;
    return 0;
}

//pass by refrence
void doSomething(string &s)
{
   s[0]='T';
   cout<<s<<endl;
}

int main()
{
    string s="Raj";
    doSomething(s);
    cout<<s<<endl;
    return 0;
}

// array are always passed using references
void doSomething(int arr[], int n)
{
    arr[0] += 100;
    cout<<"Value inside function "<<arr[0]<<endl;
}
int main()
{   
    int n=5;
    int arr[5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    doSomething(arr,n);
    cout<<"Value inside int main "<<arr[0]<<endl;
    return 0;
}