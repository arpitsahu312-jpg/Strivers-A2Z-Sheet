#include<bits/stdc++.h>
using namespace std;
    int romanToInt(string s) {
        int sum=0;
        auto p1=s.begin();
        auto p2=s.begin();
        p2++;
        while(p1 != s.end())
        {
          if(*p1 == 'I')
          {
            if(*(p2)=='V' || *(p2) =='X')
            {
                sum=sum-1;
            }
            else
            {
                sum=sum+1;
            }
          }
          else if(*(p1) == 'V')
          {
            sum=sum+5;
          }
          else if(*(p1) == 'X')
          {
            if(*(p2)=='L' || *(p2) =='C')
            {
                sum=sum-10;
            }
            else
            {
                sum=sum+10;
            }
          }
          else if(*(p1)=='L')
          {
            sum=sum+50;
          }
          else if(*(p1)=='C')
          {
            if(*(p2)=='D' || *(p2) =='M')
            {
                sum=sum-100;
            }
            else
            {
                sum=sum+100;
            } 
          }
          else if(*(p1)=='D')
          {
            sum=sum+500;
          }
          else if(*(p1)=='M')
          {
            sum=sum+1000;
          }
          p1++;
          p2++;
        }
        return sum;
    }
int main()
{
    cout<<"Enter the string:";
    string str;
    getline(cin,str);
    cout<<romanToInt(str);
    return 0;
}