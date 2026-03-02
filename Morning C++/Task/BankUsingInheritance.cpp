#include <iostream>
#include<string>
using namespace std;
class Bank
{
    int bid;
    string bankName;
    float rbiRate;
    public:
        Bank()
        {
            cout<<"This is the default constructor of bank"<<endl;
            rbiRate = 10.00f;
        }
        void scanBankDetails();
        void displayBankDetails();
};
void Bank ::scanBankDetails()
{
    cout<<"Enter Bank ID : ";
    cin>>bid;
    cout<<"Enter the Bank name : ";
    cin>>bankName;
}
void Bank ::displayBankDetails()
{
    cout<<"Bank Name : "<<bankName<<endl;
    cout<<"RBI Rate : "<<rbiRate<<endl;
}
class Account : public Bank
{
    int accountID;
    float balance,deposit,withdrawl;
    public:
        Account()
        {
            cout<<"This is the default const. of account"<<endl;
            balance = 10000.00f;
        }
        void checkBalance();
        void depositAmosunt();
        void withdrawlAmount();
};
void Account ::checkBalance()
{
    cout<<"Balance is : "<<balance<<endl;
}
void Account ::depositAmosunt()
{
    cout<<"Enter the amount to be deposited : ";
    cin>>deposit;
    if(deposit <= 0)
    {
        cout<<"The deposit Amount is not valid"<<endl;
    }
    balance = balance + deposit;
}
void Account ::withdrawlAmount()
{
    cout<<"Enter the withdrawl amount : ";
    cin>>withdrawl;
    balance = balance - withdrawl;
}
class Customer:public Account
{
    int custID;
    string custName;
    public:
        Customer()
        {
            cout<<"This is the default const. of customer"<<endl;
        }
        void scanCustomerDetails();
        void displayCustomerDetails();
};
void Customer ::scanCustomerDetails()
{
    cout<<"Enter the Customer ID : ";
    cin>>custID;
    cout<<"Enter the customer name : ";
    cin>>custName;
}
void Customer ::displayCustomerDetails()
{
    cout<<"The customer ID is : "<<custID<<endl;
    cout<<"The Customer name is : "<<custName<<endl;
}

int main() 
{
    Customer C;
    C.scanBankDetails();
    C.depositAmosunt();
    C.withdrawlAmount();
    C.scanCustomerDetails();
    C.displayCustomerDetails();
    C.checkBalance();
    C.displayBankDetails();
    
    return 0;
}