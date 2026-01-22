#include<iostream>
using  namespace std;
int main()
{
    int  a[50][50] ,row,col,i,j; 
    cout<<"enter the rows   : ";
    cin>>row;
    cout<<"enter the cols   : ";
    cin>>col;

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"matrix : \n"; 
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0; 
}   