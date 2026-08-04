#include<bits/stdc++.h>
using namespace std;
    
    long long power(long long base, long long exp) {
        long long res = 1;
        long long mod = 1000000007;
        base = base % mod;
        
        while (exp > 0) {
            if (exp % 2 == 1) {
                res = (res * base) % mod;
            }
            base = (base * base) % mod;
            exp = exp / 2;
        }
        return res;
    }
    
    int countGoodNumbers(long long n) {
        long long mod = 1000000007;
        long long even_positions = (n + 1) / 2;
        long long odd_positions = n / 2;
        long long even_combinations = power(5, even_positions);
        long long odd_combinations = power(4, odd_positions);
        return (even_combinations * odd_combinations) % mod;
    }

int main()
{
    cout<<"Enter the value of n"<<endl;
    long long n;
    cin>>n;
    cout<<countGoodNumbers(n);
}