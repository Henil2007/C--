/*
ask user  to enter the array  and separate the pelindrome number from the array .

    input  a[5] = {121,123,141,156,161}
    output  : pelindrome number is  {121,141,161}
*/
#include <iostream>
using namespace std;

int main()
{
    int n, arr[50];

    cout << "Enter size of array: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element: ";
        cin >> arr[i];
    }

    cout << "\nPalindrome numbers in the array are:\n";

    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int rev = 0, temp = num;

        while (temp > 0)
        {
            rev = rev * 10 + (temp % 10);
            temp = temp / 10;
        }

        if (rev == num)
        {
            cout << num << " ";
        }
    }

    return 0;
}
