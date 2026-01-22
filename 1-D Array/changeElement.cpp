#include <iostream>
using namespace std;
int main() 
{
    int a[50],num,index,i,element;
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
    cout<<"ENter index you want to change : ";
    cin>>index;

    cout<<"Enter element you want to update : ";
    cin>>element;

    a[index] = element;

    for(i=0;i<num;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}