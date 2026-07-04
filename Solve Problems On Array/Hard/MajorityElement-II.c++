// Boyer-Moore Voting Algorithm-

#include<bits/stdc++.h>
using namespace std;

vector<int> MajorityElement(vector<int>&nums)
{
    int n=nums.size();
    vector<int> vec;
    int c1=0,c2=0;
    int e1=0,e2=0;

    for(int i=0;i<n;i++)
    {
        if(nums[i]==e1)
        {
           c1++;
        }
        else if(nums[i]==e2)
        {
            c2++;
        }
        else if(c1==0)
        {
            e1=nums[i];
            c1++;
        }
        else if(c2==0)
        {
            e2=nums[i];
            c2++;
        }
        else
        {
            c1--;
            c2--;
        }
    }

    c1=0;c2=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==e1) c1++;
        else if(nums[i]==e2) c2++;
    }

    if(c1>n/3) vec.push_back(e1);
    if(c2>n/3) vec.push_back(e2);

    return vec;

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
    cout<<"The majority element are:"<<'\n';
    vector<int> V=MajorityElement(vec);
    for(int i:V)
    {
        cout<<i<<',';
    }
    return 0;
}