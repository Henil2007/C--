#include <iostream>
using namespace std;
int main() 
{
    int maths,computer,english,total,per;
    cout << "Enter marks of Marhs : ";
    cin >> maths;
    cout << "Enter marks of computer : ";
    cin >> computer;
    cout << "Enter marks of english : ";
    cin >> english;

    total = maths + computer + english;
    per = total / 3;

    if(per >= 90 && per <= 100)
    {
        cout << "A Grade";
    }
    else if(per >= 70)
    {
        cout << "B Grade";
    }
    else if(per >= 50)
    {
        cout << "C Grade";
    }
    else
    {
        cout << "F Grade";
    }
    return 0;
}