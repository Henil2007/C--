// selection sort :
/*
==>finding the minimum element from unsorted array .
==> swapping it with the first unsorted position . 
==>repeating until the array is sorted .

a[5] =  {10,5,2,7,4}
*/

#include <iostream>
using namespace std;
int main() 
{
    int a[50],num,i,j,temp;
    cout<<"Enter the size of an array : ";
    cin>>num;

    for(i=0;i<num;i++)
    {
        cout<<"Enter a["<<i<<"] : ";
        cin>>a[i];                  // {10,5,2,7,4}
    }
    cout<<"\nArray before sorting : \n";
    for(i=0;i<num;i++)
    {
        cout<<a[i]<<"  ";   // {10,5,2,7,4}
    }
    for(i=0;i<num-1;i++)    // i = 0 < 4
    {
        int minindex = i;   // minindex = 0
        for(j=i+1;j<num;j++)    // j = 3 < 5
        {
            if(a[j] < a[minindex])  // a[3] < a[2]
            {                       // 7 < 2
                minindex = j;       // minindex = 2
            }
        }   // End of inner for
        temp = a[i];
        a[i] = a[minindex];
        a[minindex] = temp;
    }   // End of outer for
    cout<<"\nAfter sort Array is : \n";
    for(i=0;i<num;i++)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}   // End of main()