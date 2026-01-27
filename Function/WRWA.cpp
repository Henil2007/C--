#include <iostream>
using namespace std;

int addfn(int a , int b)
{
    int c = a + b;
    return c;
}
int main() 
{
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;

    cout<<"Sun = "<<addfn(a,b);
    return 0;
}