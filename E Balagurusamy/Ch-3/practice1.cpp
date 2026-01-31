#include <iostream>
using namespace std;
int main() 
{
    int a,b,temp;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;

    cout<<"Value of a before swap : "<<a<<endl<<"Value of b before swap : "<<b<<endl;

    temp = a;
    a = b;
    b = temp;

    cout<<"Value of a after swap : "<<a<<endl<<"Value of b after swap : "<<b<<endl;
    return 0;
}