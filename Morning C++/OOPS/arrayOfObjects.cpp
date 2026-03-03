#include <iostream>
using namespace std;
class Student
{
    public:
    int id;

    // Default constructor is required for static array declaration
    Student() : id(0)
    {

    }
    Student(int p_id) : id(p_id)
    {

    } // Parameterized constructor  
    void displayId()
    {
        cout<<"Student ID : "<<id <<endl;
    }
};
int main() 
{
    int i;

    // Declares an array of 3 atudent objects using the default constructor
    Student students[10];

    // Initialize object using a lop or direct access
    for(i=0;i<10;i++)
    {
        students[i].id = i+1;
    }

    // Accessand use objects
    for(i=0;i<10;i++)
    {
        students[i].displayId();
    }

    return 0;
}