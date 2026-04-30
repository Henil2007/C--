#include<iostream>
using namespace std;
class bank 
{
    protected : 
        string name; 
        int accno; 
        int  balance; 
    public : 
        bank(string n, int a, int b)
        {
            name =n; 
            accno = a;
            balance = b;
        }
    virtual void calculation_int() =0; 

    void  display()
    {
        cout<<"name : "<<name<<endl;
        cout<<"accno : "<<accno<<endl;
        cout<<"balance : "<<balance<<endl;
    }
};

class saving : public bank
{
    public :
        saving(string n, int a, int b) : bank(n, a, b)
        {
        }
    void calculation_int()
    {
        int intrest = balance  * 0.05;  //(5% int )
        balance = balance + intrest;
        cout<<"saving  int : "<<intrest<<endl;
    }
};

class fixdeposit : public bank 
{
    public :
        fixdeposit(string n, int a, int b) : bank(n, a, b)
        {
        }
    void calculation_int()
    {
        int intrest = balance  * 0.09;  //(5% int )
        balance = balance + intrest;
        cout<<"saving  int : "<<intrest<<endl;
    }
};
class current : public bank
{
    public:
        current(string n, int a, int b) : bank(n, a, b)
        {
        }
    void calculation_int() override
    {
        int intrest = balance * 1.09;
        balance = balance + intrest;
        cout<<"current int : "<<intrest<<endl;
    }
};

int  main()
{
    int choice; 
    string name;
    int accno;
    int balance;
    bank *b; 


    do{
            cout<<"BANK MENU"<<endl;
            cout<<"1. saving"<<endl;
            cout<<"2. fix deposit"<<endl;
            cout<<"3. Current account"<<endl;
            cout<<"4. exit"<<endl;
            cout<<"enter your choice : ";
            cin>>choice;
            if(choice >=1 && choice <=3)
            {
                cout<<"enter name : ";
                cin>>name;
                cout<<"enter accno : ";
                cin>>accno;
                cout<<"enter balance : ";
                cin>>balance;
            }
            switch(choice)
            {
                case 1 :
                {
                    saving s(name, accno, balance);
                    b= &s; 
                    b->display(); 
                    b->calculation_int();
                    break;
                }    
                case 2 : 
                {
                    fixdeposit f(name, accno, balance);
                    b= &f;
                    b->display();
                    b->calculation_int();
                    break;
                }
                case 3 :
                {
                    current c(name, accno, balance);
                    b = &c;
                    b->display();
                    b->calculation_int();
                    break;
                }
                case 4 :
                {
                    cout<<"Bye..."<<endl;
                    exit(0);
                }
                default :
                { 
                    cout<<"wrong choice"<<endl;
                    break;
                }
            }

    }
    while(choice !=3);
    return 0; 
}