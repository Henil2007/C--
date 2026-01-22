#include <iostream>
using namespace std;
int main() 
{
    int c,f;
    cout<<"Enter temperature in Fahrenheit : ";
    cin>>f;
    c = (f-32)*0.5;

    cout<<"Temperature in celsius = "<<c;
    return 0;
}