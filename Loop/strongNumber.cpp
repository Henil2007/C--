// strong number  : 
/*
145 :
each factorial  : 1  24  120 
sum = 1+120 +24 =145  
*/

#include <iostream>
using namespace std;
int main() 
{
    int num,i,temp,fact,sum=0;
    cout<<"Enter number : ";
    cin>>num;
    temp = num;
    
    while (temp != 0)
    {
        fact = 1;
        int r = temp % 10;
        for ( i = 1; i <= r; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }

    if(sum == num)
    {
        cout<<num<<" is Strong number.";
    }
    else
    {
        cout<<num<<" is not Strong number.";
    }
    return 0;
}