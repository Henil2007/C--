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
        cin>>a[i];                  // {2,7,5,1,3}
    }
    cout<<"\nArrayvbefore sorting.\n";
    for(i=0;i<num;i++)
    {
        cout<<a[i]<<"  ";       // {2,7,5,1,3}
    }

    for(i=0;i<num;i++)  // i = 0 < 5
    {
        for(j=i+1;j<num;j++)    // j = 3 = 3<5
        {
            if(a[i]>a[j])   // a[0] > a[3]
            {               // 2    > 1
                temp = a[i];    // temp = a[0] = 2
                a[i] = a[j];    // a[0] = a[3] = 1
                a[j] = temp;    // a[3] = temp = 2
            }   // End of if
        }   // End of inner loop
    }   // End of outer loop
    cout<<"\nAfter sorting array element is : \n";
    for(i=0;i<num;i++)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}   // End of main()