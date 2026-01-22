// insertion sort  : 
/*
it works  like sorting  playing cards. 
==> take one  element  at a time . 
==> insert it into coorect position in the sorted part of the array. 
*/

#include <iostream>
using namespace std;
int main() 
{
    int a[50],num,i,j,temp;
    cout<<"Enter size of an array : ";
    cin>>num;

    for(i=0;i<num;i++)
    {
        cout<<"Enter a["<<i<<"] : ";
        cin>>a[i];                  // {1,5,2,7,4}
    }
    cout<<"Array before sorting is : \n";
    for(i=0;i<num;i++)
    {
        cout<<a[i]<<"  ";       // {1,5,2,7,4}
    }
    cout<<endl;
    for(i=1;i<num;i++)  // i = 4 < 5
    {
        int key = a[i]; // key = a[4] => key = 4
        j = i-1;        // j = i-1 => j = 4-1 = 3
        while (j>=0 && a[j]>key)    // 1>=0 && a[1]>4 
        {                                   // 2 > 4  
            a[j+1] = a[j];  // a[3] = a[2] => a[3] = 4
            j--;            // j = 1
        }   // End of inner While loop
        a[j+1] = key;   // a[2] = 4     {1,2,4,5,7}
    }   // End of outer for loop
    cout<<"After sorting array element is : \n";
    for(i=0;i<num;i++)
    {
        cout<<a[i]<<endl;   // {1,2,4,5,7}
    }
    return 0;
}   // End of main()