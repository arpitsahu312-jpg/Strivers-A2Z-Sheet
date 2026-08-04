#include<bits/stdc++.h>
using namespace std;

int recursiveatoi(string str,int i,int sign,int num)
{
    if(i<str.size() && str[i]>='0' && str[i]<='9')
    {
        num=num*10+(str[i]-'0');
        i++;
        num=recursiveatoi(str,i,sign,num);
    }
    if (sign == 1 && num > INT_MAX) return INT_MAX;
    if (sign == -1 && -num < INT_MIN) return INT_MIN;
    return num;
}

int atoi1(string str)
{
    int i=0;
    int n=str.size();
    while(str[i]==' ')
    {
        i++;
    }
    int sign=1;
    if(str[i]=='-'||str[i]=='+')
    {
        sign=(str[i]=='-')?-1:1;
        i++;
    }
    return sign*recursiveatoi(str,i,sign,0);
}

int main()
{
    cout<<"Enter a string"<<endl;
    string str;
    getline(cin,str);
    cout<<atoi1(str)<<endl;
    return 0;
}