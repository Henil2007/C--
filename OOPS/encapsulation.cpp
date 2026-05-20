#include <iostream>
using namespace std;
class Student
{
    private:
        int rno;
        string name;
        float marks;
    public:
        void scanData();
        void displayData();
};
inline void Student ::scanData()
{
    cout<<"Enter Roll no. : ";
    cin>>rno;
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter marks : ";
    cin>>marks;
}
inline void Student ::displayData()
{
    cout<<endl<<rno<<"\t"<<name<<"\t"<<marks;
}
int main() 
{
    int i;
    Student s[3];

    for(i=0;i<3;i++)
    {
        s[i].scanData();
    }
    for(i=0;i<3;i++)
    {
        s[i].displayData();
    }
    return 0;
}