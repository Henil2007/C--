#include<iostream>
using  namespace std;
int main()
{
    int a[50] ,num,ele,pos; 
    cout<<"enter the size of array  : ";
    cin>>num; 
    for(int i=0; i<num; i++)
    {
        cout<<"Enter element : ";
        cin>>a[i]; 
    }
    cout<<"before remove  duplicate  array  element is  : \n";
    for(int i=0; i<num; i++)
    {                          
        cout<<a[i]<<endl;  
    }

    // cout<<"remove  duplicate  element is  : \n"; 
    for(int i=0; i<num; i++) // 1   1 < 5 
    {
        for(int j=i+1; j<num; j++)// j=2  2 <5 
        {
            if(a[i] ==a[j]) // a[1] ==a[2]   2==2 
            {
                for(int  k=j; k<num-1; k++) // k=5  5 <5  
                {
                    a[k] =a[k+1];  // a[4] = a[5]
                }
                num--;  // 5
                j--; // 1
            }
        }
    }
    cout<<"after remove  duplicate  array  element is  : \n";
    for(int i=0; i<num; i++)
    {
        cout<<a[i]<<endl;  // a[6] = {1,    2,   2     3,   7}
    }
    return 0; 
}