#include <iostream>
using namespace std;
int main() 
{
    int a[50],num,element,pos;
    cout<<"Enter size of array : ";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cout<<"Enter element : ";
        cin>>a[i];
    }
    cout<<"before update  array  element is  : \n";
    for(int i=0; i<num; i++)
    {                           
        cout<<a[i]<<"\n ";   
    }                         
    cout<<"Enter index you want to remove : ";
    cin>>pos;  

    for(int i=pos;i<num-1;i++)  
    {
        a[i] = a[i+1];
    }
    cout<<"Afetr inserting element new array is : ";
    for(int i=0;i<num;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
    
}