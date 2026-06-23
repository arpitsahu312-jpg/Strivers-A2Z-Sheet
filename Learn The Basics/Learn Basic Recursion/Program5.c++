// Sum of First N numbers;

# include<bits/stdc++.h>
using namespace std;
int sum=0;
int sum_num(int N)
{
    if(N==0) return sum;
    sum=sum+N;
    N--;
    sum_num(N);
}

int main()
{
    int n;
    cout<<"Enter the integer N:";
    cin>>n;
    cout<<"Sum of first "<<n<<" numbers is:"<<sum_num(n)<<endl;
    return 0;
}