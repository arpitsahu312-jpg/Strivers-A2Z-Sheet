// You are given an integer array nums and an integer k. In one operation, you can choose an index of nums and increment the element at that index by 1.
// Return the maximum possible frequency of an element after performing at most k operations.

#include<bits/stdc++.h>
using namespace std;


int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        int left = 0;
        long long current_sum = 0; 
        int max_freq = 0;
        
        for (int right = 0; right < nums.size(); right++) {
            current_sum += nums[right];
            long long target = nums[right];
            long long window_size = right - left + 1;
            
            while ((target * window_size) - current_sum > k) {
                current_sum -= nums[left];
                left++;
                window_size = right - left + 1;
            }
            max_freq = max(max_freq, (int)window_size);
        }
        return max_freq;
    }

    int main()
    {
        int size;
        cout<<"Enter the size of vector:";
        cin>>size;
        vector<int> vec(size);
        cout<<"enter the elements of the vector"<<endl;
        for(int i=0;i<size;i++)
        {
        cin>>vec[i];
        }
        int k;
        cout<<"Enter the value of k:";
        cin>>k;
        cout<<maxFrequency( vec,k);
        return 0;
    }