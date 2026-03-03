#include <iostream>
using namespace std;
class Employee
{
    int id;
    string name;
    public:
    Employee()
    {
        cout<<"The employee inititated"<<endl;
    }
    // Decleration of function
    void getdata();
    void putdata();
};
// Defining the function outside the class
void Employee ::getdata()
{
    cout <<"Enter id : ";
    cin>>id;
    cout
    <<"Enter name : ";
    cin>>name;
}
// Defining the function outside the class
void Employee::putdata()
{
    cout<<"Id = "<<id<<endl;
    cout<<"Name = "<<name<<endl;
}
// Driver code
int main() 
{
    // This is an array of object having maximum limit of 30 employees
    Employee emp[30];
    int n,i;
    cout<<"Enter number of Employees : ";
    cin>>n;

    // Accessing the function
    for(i=0;i<n;i++)
    {
        emp[i].getdata();
    }
    cout<<"Employee Data - "<<endl;

    // Accessing the function
    for(i=0;i<n;i++)
    {
        emp[i].putdata();
    }
    return 0;
}