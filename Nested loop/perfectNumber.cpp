// perfect : 

/*
6 factors  : 1,2,3,6   ==> sum = 1+2+3 =6 
*/

#include<iostream>
using  namespace std;
int main()
{
    int start,end,sum,i,j; 
    cout<<"enter the starting number  : "; 
    cin>>start; 
    cout<<"enter the ending number  : ";
    cin>>end; 

    for(i=start; i<=end; i++) // i=12  i<= 10000
    {
        sum =0 ; // sum =0 
        for(j=1; j<i; j++)// j =4  4 <12 
        {
            if(i %j ==0) // 12 % 4 ==0 
            {
                sum =sum +j;  //  sum =10 
            }
        }
        if(sum ==i)
        {
            cout<<i<<endl;
        } 
    }
    return 0; 
}