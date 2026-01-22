// Disarium Number : 
/*
A Disarium number is a number in which the sum of its digits raised to the power of their respective positions (starting from 1) is equal to the number itself. 

ex : 175 :
    1 pow 1 =1 
    7 pow 2 =49
    5 pow 3 =125
    sum = 1 +49+125 =175 then it is disarium number . 
*/

#include <iostream>
#include<math.h>
using namespace std;
int main() 
{
    int num,firstDigit,secondDigit,thirdDigit,sum=0,temp;
    cout<<"Enter number of three digit : ";
    cin>>num;

    temp = num;
    firstDigit = num / 100;
    secondDigit = (num/10) % 10;
    thirdDigit = num % 10;
    sum = pow(firstDigit,1) + pow(secondDigit,2) + pow(thirdDigit,3);

    if(sum == temp)
    {
        cout<<"the number is Disarium number";
    }
    else
    {
        cout<<"the number is not disarium number";
    }
    
    return 0;
}