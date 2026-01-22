/*
        1 2 3 4 5
        2 3 4 5
        3 4 5
        4 5
        5
*/

#include <iostream>
using namespace std;
int main() 
{
    int i,j,num;
    cout<<"Enter number : ";
    cin>>num;

    for(i=1;i<=num;i++)
    {
        for(j=i;j<=num;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
