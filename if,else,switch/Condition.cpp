#include<iostream>
using namespace std;
int main()
{
    int no;
    cout << "Enter no : ";
    cin >> no;

    if(no > 0)
    {
        cout << no << " is positive";
    }
    else if(no < 0)
    {
        cout << no << " is Negative";
    }
    else
    {
        cout << "Number is " << no;
    }
    return 0;
}