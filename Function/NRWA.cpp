#include <iostream>
using namespace std;

void addfn(int a , int b)
{
    int c;
    c = a + b;
    cout<<"sum = "<<c;
}
int main() 
{
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;

    addfn(a,b);
    return 0;
}