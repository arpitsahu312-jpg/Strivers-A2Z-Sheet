#include<bits/stdc++.h>
using namespace std;

int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1) return INT_MAX;
    int negatives = 0;
    if (dividend > 0) {
        negatives++;
        dividend = -dividend;
    }
    if (divisor > 0) {
        negatives++;
        divisor = -divisor;
    }
    int quotient = 0;
    while (dividend <= divisor) {
        int temp = divisor;
        int multiple = -1;
        while (temp >= -1073741824 && dividend <= (temp << 1)) {
            temp <<= 1;
            multiple <<= 1;
        }
        dividend -= temp;
        quotient += multiple; 
    }
    return negatives == 1 ? quotient : -quotient;
}

int main()
{
    int divident,divisor;
    cout<<"Enter the divident and the divisor:"<<endl;
    cin>>divident>>divisor;
    cout<<divide(divident,divisor);
    return 0;
}