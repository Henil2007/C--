/*
amg  : 

153 : 3 digit 
each cube  : 1 125 27    sum = 1+125+27 =153

1634 : 4 digit 
each power : 1 pow 4   = 1  6 power 4  =1296  3 pow 4 =81  4 pow 4 =256  
sum = 1+1296+81+256 =1634

logic :  count = 0 
    temp = temp /10 
    count ++       ===> count =4 

logic 2 : 
r = temp %10    1 %10 =1 
sum =sum + pow(r,count)   // sum = 1634 
temp = temp /10  // temp =0 
*/

#include <iostream>
#include<math.h>
using namespace std;
int main() 
{
    int num,temp,sum=0,count = 0;
    cout<<"Enter number : ";
    cin>>num;//153

    temp = num;//153
    while (temp != 0)//0>0 false
    {
        temp = temp / 10;//1/10 = 0
        count++;// count = 3
    }// End of while
    
    temp = num;//153
    while (temp != 0)//0>0 false
    {
        int r = temp % 10;//r = 1%10 = 1
        sum = sum + pow(r,count);//sum = 152 + pow(1,3)=152+1=153
        temp = temp / 10;//1/10=0
    }//End of while

    if (sum == num)
    {
        cout<<num<<" is Armstrong number.";
    }// End of if
    else
    {
        cout<<num<<" is not an Armstrong number.";
    }// End of else
    return 0;
}