#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int a[50], num, i, j, temp, choice;
    cout << "Enter size of an array : ";
    cin >> num;

    for (i = 0; i < num; i++)
    {
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
    }
    cout << "Array before sorting is : \n";
    for (i = 0; i < num; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl;

    while (1)
    {
        cout << "\n1. For Bubble Sorting";
        cout << "\n2. For Selection Sorting";
        cout << "\n3. For Insertion Sorting";
        cout << "\n4. Exit";
        cout << "\nEnter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            for (i = 0; i < num; i++)
            {
                for (j = i + 1; j < num; j++)
                {
                    if (a[i] > a[j])
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    } // End of if
                } // End of inner loop
            } // End of outer loop
            cout << "\nAfter sorting array element is : \n";
            for (i = 0; i < num; i++)
            {
                cout << a[i] << "  ";
            }
            break;
        case 2:
            for (i = 0; i < num - 1; i++)
            {
                int minindex = i;
                for (j = i + 1; j < num; j++)
                {
                    if (a[j] < a[minindex])
                    {
                        minindex = j;
                    }
                } // End of inner for
                temp = a[i];
                a[i] = a[minindex];
                a[minindex] = temp;
            } // End of outer for
            cout << "\nAfter sort Array is : \n";
            for (i = 0; i < num; i++)
            {
                cout << a[i] << "  ";
            }
            break;
        case 3:
            for (i = 1; i < num; i++)
            {
                int key = a[i];
                j = i - 1;
                while (j >= 0 && a[j] > key)
                {
                    a[j + 1] = a[j];
                    j--;
                } // End of inner While loop
                a[j + 1] = key;
                {
                } // End of outer for loop
                cout << "After sorting array element is : \n";
                for (i = 0; i < num; i++)
                {
                    cout << a[i] << endl;
                }
            }
            break;
        case 4:
            exit(0);
        default:
            cout << "Enter a valid choice...";
            break;
        } // End of Switch case
    } // End of while loop
    return 0;
}   // ENd of main()