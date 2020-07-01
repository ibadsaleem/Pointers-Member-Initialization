#include <iostream>
#include<string>
using namespace std;
class BankAccount
{
    int AccN;
    string Name;
    char type;
    float Balance;
    static float interest;
    public:
    
    static void setint(float i)
    {
        interest=i;
    }
    BankAccount()
    {
        Name=" ";
        type= ' ';
        Balance=0.0;
    }
    BankAccount(string n,char t,float b,int A)
    {
        Name=n;
        type=t;
        Balance=b;
        AccN=A;
    }
    void deposit(float amt)
    {
        Balance=Balance+amt;
    }

    void withdraw(float b)
    {
        if (b<Balance)
        {
            Balance=Balance-b;
        }
        else 
        {
            cout<<"\nInsufficient Money!";
        }
    }
    void display()
    {
        cout<<"\nName of Depositor: "<<Name;
        cout<<"\nBalance: "<<Balance;
        cout<<"\nType of Account: "<<type;
    }
  static void showint()
  {
      cout<<"\nInterest: "<<interest;
  }


};

float BankAccount::interest=12.67;
int main()
{
    system("cls");
    BankAccount B1("Ibad",'S',1457.25,985474125);
    B1.display();                       //intially
     B1.showint();
    B1.deposit(2500);
    cout<<endl; 
    B1.display();    //after deposit
    B1.showint();               
    B1.withdraw(650);
    cout<<endl; 
    B1.display();                       //after withdraw
    B1.showint();
}