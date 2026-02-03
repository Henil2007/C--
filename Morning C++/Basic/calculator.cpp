#include <iostream>
using namespace std;
int main()
{
    int a, b, c, choice;
    cout << "Enter value of a : ";
    cin >> a;
    cout << "Enter value of b : ";
    cin >> b;

    cout << endl
         << "1. For addition";
    cout << endl
         << "2. For Substraction";
    cout << endl
         << "3. For Multiplication";
    cout << endl
         << "4. For Division";
    cout << endl
         << "Enter your choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        c = a + b;
        cout << "Sum is : " << c;
        break;
    case 2:
        c = a - b;
        cout << "Substraction is : " << c;
        break;
    case 3:
        c = a * b;
        cout << "Multplication is : " << c;
        break;
    case 4:
        if (b == 0)
        {
            cout << "Indefined";
        }
        else
        {
            c = a / b;
            cout << "Division is : " << c;
        }
        break;
    }

    return 0;
}