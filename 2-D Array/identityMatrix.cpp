#include <iostream>
using namespace std;
int main()
{
    int a[50][50], row, col, i, j;
    cout << "enter the rows   : ";
    cin >> row;
    cout << "enter the cols   : ";
    cin >> col;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "Enter a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
    }
    cout << "matrix : \n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    int flag = 1;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j && a[i][j] != 1)
            {
                flag = 0;
            }
            else if (i != j && a[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    if (flag == 1)
        cout << "Identity Matrix";
    else
        cout << "Not an Identity Matrix";

    return 0;
}