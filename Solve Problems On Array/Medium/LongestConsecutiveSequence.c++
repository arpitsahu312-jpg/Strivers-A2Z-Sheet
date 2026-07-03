#include<bits/stdc++.h>
using namespace std;


int longestConsecutive(vector<int>& nums) {
    if (nums.empty()) return 0;

    sort(nums.begin(), nums.end());
    int longest = 1, curr = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i - 1]) continue;
        if (nums[i] == nums[i - 1] + 1)
            curr++;
        else {
            curr = 1;
        }
        longest = max(longest, curr);
    }
    return longest;
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
    cout<<"The longest Consequent Sequence is:"<<longestConsecutive(vec);
    return 0;
}