// insert : 
/*
int  a[5] = {1,6,2,5,3} 

user  insert =77 
user index : 2 

after  insert : {1,6,77,2,5,3}
*/

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
    cout<<"Enter number you want to add : ";
    cin>>element;
    cout<<"Enter index you want to add : ";
    cin>>pos;

    for(int i=num;i>pos;i--)
    {
        a[i] = a[i-1];
    }
    a[pos] = element;
    num++;
    cout<<"Afetr inserting element new array is : ";
    for(int i=0;i<num;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}