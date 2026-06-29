#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    int n=nums.size();
    int p1=0;
    int p2=0;
    int p3=n-1;
    while(p2<=p3){
        if(nums[p2]==0){
            swap(nums[p2],nums[p1]);
            p1++;
            p2++;
        }
        else if(nums[p2]==2){
            swap(nums[p2],nums[p3]);
            p3--;
        }
        else{
            p2++;
        }
    }
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
    sortColors(vec);
    for(int i:vec)
    {
        cout<<i<<',';
    }
    return 0;
}