#include <iostream>
using namespace std;
int main() 
{
    int a[50],num,element;
    cout<<"Enter size of array : ";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cout<<"Enter element : ";
        cin>>a[i];
    }
    cout<<"array  elements are  : \n";
    for(int i=0; i<num; i++)
    {                            
        cout<<a[i]<<"\n ";  
    }

    cout<<"Enter element you want to search : ";
    cin>>element;

    for(int i=0;i<num;i++)
    {
        if(element == a[i])
        {
            cout<<"Index is : "<<i;
        }
    }
    return 0;
}