#include <iostream>
using namespace std;
class bank 
{
    public : 
        string ac_holder_name ="nirmit"; 
        string bank_name ="HDFC"; 
        double ac_number =721200089456; 
        string branch= "Mehsana"; 
        int balance = 30000;
        int pin = 1234; 
    
    void deposit(int amt)
    {
        int vpin;
        cout<<"Enter verification pin : ";
        cin>>vpin;

        if(vpin == pin)
        {
            balance+=amt;
            cout<<"deposit amt is  : "<<amt<<endl;
        }
    }
    void withdraw(int amt) // 40000 -3600 >=10000  
    {
        int vpin;
        cout<<"Enter Verification pin : ";
        cin>>vpin;
        if(vpin == pin)
        {
            if(balance -amt >=10000)
            {
                balance-=amt;
                cout<<"withdraw amt is  : "<<amt<<endl;
            }
            else 
            {
                cout<<"min balance is  required 10000 rs. "<<endl;
            }
        }
        else
        {
            return;
        }
    }
    void check_balance()
    {
        cout<<"balance is : "<<balance<<endl;
    }
    void  info()
    {
        cout<<"bank name is : "<<bank_name<<endl;
        cout<<"branch is : "<<branch<<endl;
        cout<<"ac holder name is : "<<ac_holder_name<<endl;
        cout<<"ac number is : "<<ac_number<<endl;
        cout<<"intial balance is : "<<balance<<endl;
    }
};
int main()
{
    bank b1; 
    b1.info(); 
    b1.deposit(10000); 
    b1.withdraw(18000);
    b1.check_balance(); 
    return 0; 
}