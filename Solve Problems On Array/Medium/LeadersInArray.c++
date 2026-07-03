#include<bits/stdc++.h>
using namespace std;

vector<int> leaderinarray(vector<int>&nums)
{
    int size=nums.size();
    vector<int> leader;
    leader.push_back(nums[size-1]);
    int right=nums[size-1];
    for(int i=size-2;i>-1;i--)
    {
        if(nums[i]>right)
        {
            leader.push_back(nums[i]);
            right=nums[i];
        }
    }
    return leader;
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
    cout<<"The leaders are:"<<"\n";
    vector<int> Vec=leaderinarray(vec);
    int s=Vec.size();
    for(int i=0;i<s;i++)
    {
        cout<<Vec[i]<<',';
    }
    return 0;
}