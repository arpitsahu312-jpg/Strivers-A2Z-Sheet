#include<bits/stdc++.h>
using namespace std;

int minDays(vector<int>& bloomDay, int m, int k) 
{
    int n = bloomDay.size();
    if((long long)m*k> bloomDay.size()) return -1;

    int low = *min_element(bloomDay.begin(),bloomDay.end());
    int high = *max_element(bloomDay.begin(),bloomDay.end());
    while(low <= high){
        int mid = low + (high-low)/2;

        int cnt = 0,bq=0;
        for(int i = 0; i < n;i++){
            if(bloomDay[i]<=mid){
                cnt++;
            }
            else
            {
                bq+=cnt/k;
                cnt=0;
            }
        }
        bq+=cnt/k;
        if(bq>=m) high = mid - 1;
        else low = mid + 1;
    }
    return low;
}

int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int> vec(n);
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    cout<<"\n";
    int m;
    cout<<"Enter the value of m::";
    cin>>m;
    int k;
    cout<<"Enter the value of k:";
    cin>>k;
    cout<<minDays(vec,m,k);
    return 0;
}