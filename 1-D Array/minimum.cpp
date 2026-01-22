#include <iostream>
using namespace std;
int main() 
{
    int num,a[50],i;
    cout<<"Enter size of array : ";
    cin>>num;

    for(i=0;i<num;i++)
    {
        cout<<"Enter element : ";
        cin>>a[i];
    }
    for(i=0;i<num;i++)
    {
        cout<<a[i]<<endl;
    }

    int min = a[0];

    for(i=0;i<num;i++)
    {
        if(a[i]<min)
        {
            min = a[i];
        }
    }

    cout<<"Minimum number is : "<<min;
    return 0;
}