#include <iostream>
using namespace std;
int main()
{
    int a[50][50], row, col, i, j, k;
    int b[50][50], c[50][50];

    cout << "enter the rows   : ";
    cin >> row;
    cout << "enter the cols   : ";
    cin >> col;

    cout << "Matrix a : " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "Enter Element : ";
            cin >> a[i][j];
        } // End of inner loop
    } // End of outter loop

    cout << "matrix b: \n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "Enter element : ";
            cin >> b[i][j];
        } // End of inner loop
    } // End of outter loop
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            c[i][j] = 0;
        } // End of inner loop
    } // End of outter loop

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            for (k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << c[i][j]<<"\t";
        }
        cout << endl;
    }
    return 0;
}