// harshard  number  : 

/*
ex : 18 
each digit sum = 1+8 = 9 
now  if (num % sum) == 0  then is  harshard  number 
        18 % 9 ==0  ==> 18 is  harshard  number
*/

#include <iostream>
using namespace std;

int main() 
{
    int start, end, i, temp;

    cout << "Enter starting number : ";
    cin >> start;
    cout << "Enter ending number : ";
    cin >> end;

    for(i = start; i <= end; i++)
    {
        int sum = 0;   
        temp = i;

        while (temp != 0)
        {
            int r = temp % 10;
            sum += r;
            temp = temp / 10;
        }

        if (i % sum == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}
