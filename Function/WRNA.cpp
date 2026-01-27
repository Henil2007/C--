#include <iostream>
using namespace std;
int addfn()
{
    int a,b,c;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;

    c = a + b;
    return c;
}
int main() 
{
    cout<<"sum = "<<addfn();
    return 0;
}