// harshard  number  : 

/*
ex : 18 
each digit sum = 1+8 = 9 
now  if (num % sum) == 0  then is  harshard  number 
        18 % 9 ==0  ==> 18 is  harshard  number
*/
#include <iostream>
using namespace std;
int main() 
{
    int num,sum=0,temp;
    cout<< "Enter number : ";
    cin>> num;

    temp = num;
    while(temp != 0)
    {
        int r = temp % 10;
        sum += r;
        temp = temp / 10;
    }

    if(num % sum == 0)
    {
        cout<<"The number is Harshad number.";
    }
    else
    {
        cout<<"THe number is not harshad number";
    }
    
    return 0;
}