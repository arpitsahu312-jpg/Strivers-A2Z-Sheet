#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int i=0;
    int j=0;
    int profit=0;
    int size=prices.size();
    while(j<size)
    {
    if(prices[i]>=prices[j])
    {
        i=j;
    }
    if(profit<prices[j]-prices[i])
    {
        profit=prices[j]-prices[i];
    }
    j++;
    }  
    return profit;
}

int main()
{
 int size;
    cout<<"Enter the size of array:";
    cin>>size;
    vector<int> vec(size,0);
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>vec[i];
    }
    cout<<"The max Profit  is:"<<maxProfit(vec);
    return 0;
}
