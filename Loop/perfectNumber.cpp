// perfect : 
/*
6 factors  : 1,2,3,6 
sum = 1+2+3 =6 

28 factors  1 2 4 7 14 28 
sum = 1+2+4+7+14 = 28 

100 factors : 1 2 4 5 10 20 25 50 
*/

#include <iostream>
using namespace std;
int main() 
{
    int num,temp,i,sum=0;
    cout<<"Enter number : ";
    cin>>num; // 123

    temp = num; //123

    for ( i = 1; i < temp; i++) // i=1
    {
        if (temp % i == 0)
        {
            sum = sum + i;
        }
    }

    if(num == sum)
    {
         cout<<num << " is a Perfect number.";
    }
    else
    {
        cout<< num << " is not a Perfect number.";
    }
    
    return 0;
}