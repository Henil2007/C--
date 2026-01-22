#include<iostream>
using  namespace std;
int main()
{
    int  a[50][50] ,row,col,i,j , rsum=0,csum=0; 
    cout<<"enter the rows   : ";
    cin>>row;
    cout<<"enter the cols   : ";
    cin>>col;

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout<<"Enter a["<<i<<"]["<<j<<"] : ";
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
    cout<<"Row Sum : \n";
    for(i=0;i<row;i++)
    {
        rsum = 0;
        for(j=0;j<col;j++)
        {
            rsum += a[i][j];
        }
        cout<<i<<" row sum = "<<rsum<<endl;
    }
    cout<<"Cloumn sum : \n";
    for(j=0;j<col;j++)
    {
        csum=0;
        for(i=0;i<row;i++)
        {
            csum += a[i][j];
        }
        cout<<j<<" col sum = "<<csum<<endl;
    }
    return 0; 
}   