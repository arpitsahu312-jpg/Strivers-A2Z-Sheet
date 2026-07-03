#include<bits/stdc++.h>
using namespace std;


vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 0);
    int posIndex = 0;
    int negIndex = 1;
    for(int i = 0; i<n; i++){
        if(nums[i] < 0){
            ans[negIndex] = nums[i];
            negIndex += 2;
        }
        else{ans[posIndex] = nums[i];
            posIndex += 2;
        }
    }
    return ans;
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
   vector<int> Vec=rearrangeArray(vec);
   cout<<"\n";
   for(int i=0;i<size;i++)
    {
        cout<<Vec[i]<<',';
    }
    return 0;
}