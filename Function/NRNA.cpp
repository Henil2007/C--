#include <iostream>
using namespace std;
void addfn()
{
    int a,b,c;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;

    c = a + b;
    cout<<"sum = "<<c;
}
int main() 
{
    addfn();
    return 0;
}