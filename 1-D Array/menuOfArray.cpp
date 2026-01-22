#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int choice;
    int a[50], num, ele, pos,index, i, element;

    while (1)
    {
        cout << "1. For Update element in an array.\n";
        cout << "2. For insert element in an Array.\n";
        cout << "3. For delete element in an Array.\n";
        cout << "4. For femoving duplication in an array.\n";
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            // int a[50], num, index, i, element;
            cout << "Enter size of array : ";
            cin >> num;

            for (i = 0; i < num; i++)
            {
                cout << "Enter element : ";
                cin >> a[i];
            }
            for (i = 0; i < num; i++)
            {
                cout << a[i] << endl;
            }
            cout << "ENter index you want to change : ";
            cin >> index;

            cout << "Enter element you want to update : ";
            cin >> element;

            a[index] = element;

            for (i = 0; i < num; i++)
            {
                cout << a[i] << endl;
            }
            break;

        case 2:
            // int a[50], num, element, pos;
            cout << "Enter size of array : ";
            cin >> num;
            for (i = 0; i < num; i++)
            {
                cout << "Enter element : ";
                cin >> a[i];
            }
            cout << "before update  array  element is  : \n";
            for (i = 0; i < num; i++)
            {
                cout << a[i] << "\n ";
            }
            cout << "Enter number you want to add : ";
            cin >> element;
            cout << "Enter index you want to add : ";
            cin >> pos;

            for (i = num; i > pos; i--)
            {
                a[i] = a[i - 1];
            }
            a[pos] = element;
            num++;
            cout << "Afetr inserting element new array is : ";
            for (i = 0; i < num; i++)
            {
                cout << a[i] << endl;
            }
            break;

        case 3:
            // int a[50], num, element, pos;
            cout << "Enter size of array : ";
            cin >> num;
            for (i = 0; i < num; i++)
            {
                cout << "Enter element : ";
                cin >> a[i];
            }
            cout << "before update  array  element is  : \n";
            for (i = 0; i < num; i++)
            {
                cout << a[i] << "\n ";
            }
            cout << "Enter index you want to remove : ";
            cin >> pos;

            for (i = pos; i < num - 1; i++)
            {
                a[i] = a[i + 1];
            }
            cout << "Afetr inserting element new array is : ";
            for (i = 0; i < num; i++)
            {
                cout << a[i] << endl;
            }
            break;

        case 4:
            // int a[50], num, ele, pos;
            cout << "enter the size of array  : ";
            cin >> num;
            for (i = 0; i < num; i++)
            {
                cout << "Enter element : ";
                cin >> a[i];
            }
            cout << "before remove  duplicate  array  element is  : \n";
            for (i = 0; i < num; i++)
            {
                cout << a[i] << endl;
            }
            for (i = 0; i < num; i++) 
            {
                for (int j = i + 1; j < num; j++) 
                {
                    if (a[i] == a[j]) 
                    {
                        for (int k = j; k < num - 1; k++) 
                        {
                            a[k] = a[k + 1]; 
                        }
                        num--; 
                        j--;  
                    }
                }
            }
            cout << "after remove  duplicate  array  element is  : \n";
            for (i = 0; i < num; i++)
            {
                cout << a[i] << endl; 
            }
            break;
        default:
            cout << "Enter valid choice...";
            break;
        }
    }

    return 0;
}