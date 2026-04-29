/*
Create a Payment system using base class Payment with virtual function pay(). Derive
CreditCard, UPI, and Cash classes. Show polymorphism using base pointer
*/
#include <iostream>
using namespace std;
class Payment
{
    public : 
        virtual void pay()
        {
            cout<<"Payment done using base class "<<endl;
        }
};
class creditCard : public Payment
{
    void pay()
    {
        cout<<"payment made using creditCard"<<endl;
    }
};
class UPI : public Payment
{
    void pay()
    {
        cout<<"Payment made using UPI"<<endl;
    }
};
class Cash : public Payment
{
    void pay()
    {
        cout<<"Payment make using Cash"<<endl;
    }
};

int main()
{
    Payment *ptr;
    creditCard c;
    UPI u;
    Cash ca;
    ptr = &c;
    ptr->pay();
    ptr = &u;
    ptr->pay();
    ptr = &ca;
    ptr->pay();
    return 0;
    
}