// The 31st bit or the leftmost bit is reserved for sign of the number
// Negative numbers are stored in 2's compliment form
// integer can range from  -(2^31) to (2^31-1) : for signed integers and 0 to (2^32) : for unsigned integers


// Binary Number Convertsion (1's & 2's compliment)
/*
    (7)10 -> (111)2
    (1101)2 -> (13)10

    int x=13 
    computer stores it in 32 bits -> 00000000000000000000000000000001101
    for int -> 32 bits
    for long long -> 64 bits

    1's compliment
    (13)10-> (1101)2 -> (0010)2 : 1's compliment

    2's compliment : 1's complimnet+1
    (13)10-> (1101)2 -> (0010)2 : 1's compliment -> (0011)2 : 2's complimnet

*/

// Operators (AND,OR,XOR,SHIFT,NOT)
/*
   AND(&)-> all true -> true
          one false -> false

   m= 3 & 7 ->  1101 & 0111 -> 0101 -> 5

   OR(|) -> one true -> true
         alll false -> false
   
    m= 3|7 -> 1101 | 0111 -> 1111 -> 15

   XOR(^)-> no of 1's -> odd -> 1
          no of 1's -> even -> 0
   
   m= 3^7 -> 1101 ^ 0111 -> 1010 ->10
  
   Right Shift(>>)
  m= 13>>1 -> ...000001101>>1 -> ...0000110 -> 6
  m= 13>>2 -> ...000001101>>2 -> ...0000011 -> 3
  m= 13>>4 -> ...000001101>>4 -> ...0000000 -> 0
  
  formula : n>>k = (n/2^k)
  
   left Shift(<<)
  m= 13<<1 -> ...000001101<<1 -> ...00011010 -> 26
  m= 13>>2 -> ...000001101<<2 -> ...00110100 -> 32
  m= 13>>4 -> ...000001101<<4 -> ...11010000 -> 64
  
  formula : n<<k = n*(2^k)

  NOT(~)-> 1.flip
           2.check -ve
  m= ~(5) -> ~(...000101) -> (1...1111010) -> since the number is -ve it will be stored in 2's compliment form -> (10...00000110) -> -6
  m= ~(-6) -> ~(1...1010) -> (0....01010) -> since its a non negative number it stays as it is -> 5

*/

//Swap two numbers without using third variable
/*
   Using property of XOR that a^a=0 , 0^a=a
   We have two variables a,b
   a=a^b;
   b=a^b -> (a^b)^b -> a;
   a=a^b -> (a^b)^a -> b;
*/

#include<bits/stdc++.h>
using namespace std;

string convert2Binary(int n)
{
    string res="";
    while(n>0)
    {
        char c=(n%2)+'0';
        res+=c;
        n/=2;
    }
    reverse(res.begin(),res.end());
    return res;
}

int convert2decimal(string str)
{
    long long res=0;
    int i=str.size()-1;
    long long factor=1;
    while(i>-1)
    {
        if(str[i]=='1')
        {
           res+=factor;
        }
       factor*=2;
       i--;
    }
    return res;
}

void bitoperators()
{
    cout<<"AND opretaor(&) -> 13&7:"<<(13&7)<<endl;
    cout<<"OR opretaor(|) -> 13|7:"<<(13|7)<<endl;
    cout<<"XOR opretaor(^) -> 13^7:"<<(13^7)<<endl;
    cout<<"Right Shift opretaor(>>) -> 13>>1:"<<(13>>1)<<endl;
    cout<<"Left Shift opretaor(<<) -> 13<<1:"<<(13<<1)<<endl;
    cout<<"NOT opretaor(~) -> ~(5):"<<~(5)<<endl;
    return;
}


void settheithbit(int& num,int i)
{
   num=num|(1<<i);
   return ;
}

void cleartheithbit(int& num,int i)
{
  num=num&(~(1<<i));
  return;
}

void toggletheithbit(int& num,int i)
{
  num=num^(1<<i);
  return;
}

void removethefirstsetbit(int& num)
{ 
  num=num&(num-1);
  return ;
}


int main()
{
    cout<<convert2Binary(7)<<endl;
    cout<<convert2Binary(13)<<endl;
    cout<<convert2decimal("111")<<endl;
    cout<<convert2decimal("1101")<<endl;
    bitoperators();
    int num1,i1;
    cout<<"Enter the number:"<<endl;
    cin>>num1;
    cout<<"Enter the bit number to be set"<<endl;
    cin>>i1;
    settheithbit(num1,i1);
    cout<<num1<<endl;
    int num2,i2;
    cout<<"Enter the number:"<<endl;
    cin>>num2;
    cout<<"Enter the bit number to be cleared"<<endl;
    cin>>i2;
    cleartheithbit(num2,i2);
    cout<<num2<<endl;
    int num3,i3;
    cout<<"Enter the number:"<<endl;
    cin>>num3;
    cout<<"Enter the bit number to be toggled"<<endl;
    cin>>i3;
    toggletheithbit(num3,i3);
    cout<<num3<<endl;
    int num4;
    cout<<"Enter the number:"<<endl;
    cin>>num4;
    removethefirstsetbit(num4);
    cout<<num4<<endl;
    return 0;
}