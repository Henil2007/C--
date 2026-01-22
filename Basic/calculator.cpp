#include <iostream>
using namespace std;
int main() 
{
    int no1,no2,choice,ans;
    float div;
    cout << "Enter number 1 : ";
    cin >> no1;
    cout << "Enter number 2 : ";
    cin >> no2;

    cout << "\n1.For Addition";
    cout << "\n2.For Substraction";
    cout << "\n3.For Multiplication";
    cout << "\n4.For Division";
    cout << "\nEnter your choice : ";
    cin >> choice;

    switch (choice)
    {
        case 1 : ans = no1 + no2;
                 cout << "Addition is : " << ans;
                break;
        case 2 : ans = no1 - no2;
                 cout << "Substraction is : " << ans;
                 break;
        case 3 : ans = no1 * no2;
                 cout << "Multiplication is : " << ans;
                 break;
        case 4 : if (no2 == 0)
                 {
                    cout << "Undefined";
                 }
                 else
                 {
                     div = no1 / no2;
                     cout << "Division is : " << div;
                     break;
                 }
        
        default: cout << "\nEnter a valid choice between 1 to 4...";
    }
    return 0;
}