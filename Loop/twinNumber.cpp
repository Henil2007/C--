/*
twin number  : 

123 : 
each digit sum = 1+2+3 =6 
each  mul = 1*2*3 =6 

steps :   sum =0 mul =1 
1. while  (temp > 0 )   num 1 
2.  r=  temp %10     // r =1 
3.  sum =sum +r     // sum =6 
4.  mul = mul *r    // mul = 6 
5.  temp = temp /10 // temp =0

6. sum ==mul  ==> 123 is twin number
*/

#include <iostream>
using namespace std;
int main() 
{
    int i,num,sum=0,mul=1;
    cout<< "Enter number : ";
    cin>> num; //123

    // ntemp;
    while(num != 0) // 0 > 0
    {
        int r = num % 10; // 1% 10 = 1
        sum = sum + r; // sum = 5 + 1 = 6
        mul = mul * r; // mul = 6 * 1 = 6
        num = num / 10; // 1/10 = 0
    }
    if(sum == mul)
    {
        cout<< "They are twin number";
    }
    else
    {
        cout<< "they are not twin";
    }
    
    return 0;
}