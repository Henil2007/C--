#include <iostream>
using namespace std;
int main() 
{
    int maths,computer,english;
    cout << "Enter marks of Maths : ";
    cin >> maths;
    cout << "Enter marks of computer : ";
    cin >> computer;
    cout << "Enter marks of english : ";
    cin >> english;

    if(maths > computer)
    {
        if (maths > english)
        {
            cout << "\nMaximum Marks scored : " << maths;
        }
        else
        {
            cout << "\nMaximum marks scored : " << english;
        }
    }
    else
    {
        if(computer > english)
        {
            cout << "\nMaximum marks scored : " << computer;
        }
        else
        {
            cout << "\nMaximum marks scored : " << english;
        }
    }
    return 0;
}