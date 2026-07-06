#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int p1 = m - 1; 
    int p2 = n - 1; 
    int p = m + n - 1; 
    while (p2 >= 0) {
        if (p1 >= 0 && nums1[p1] > nums2[p2]) {
            nums1[p] = nums1[p1];
            p1--;
        } else {
            nums1[p] = nums2[p2];
            p2--;
        }
        p--;
    }
}

int main()
{
    int m;
    cout << "Enter the size of actual elements in array 1: ";
    cin >> m;
    
    int n;
    cout << "Enter the size of array 2: ";
    cin >> n;

    vector<int> V1(m + n, 0); 
    
    cout << "Enter the " << m << " elements of array 1:" << endl;
    for(int i = 0; i < m; i++)
    {
        cin >> V1[i];
    }
    cout << '\n';
    
    vector<int> V2(n);
    cout << "Enter the " << n << " elements of array 2:" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> V2[i]; 
    }
    
    merge(V1, m, V2, n);
    cout << '\n';
    cout << "Merged Array: ";
    for(int i = 0; i < m + n; i++) 
    {
        cout << V1[i] << ',';
    }
    
    return 0;
}

    