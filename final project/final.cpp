#include<iostream>
using namespace std;
class Bank
{
    private:
        int AccountNumber;
        string AccountHolderName;
        double Balance;


        public:
          Bank(int AccountNumber, string AccountHolderName, double Balance)
       {

        this->AccountNumber=AccountNumber;
        this->AccountHolderName=AccountHolderName;
        this->Balance=Balance;

       }
       void Deposit(double amount)
       {
         if(amount<=0)
         {
            throw "Invalid deposit amount";
         }
                 Balance += amount;
         cout<< "Deposit successful.\n";

       }

       void withdraw(double amount)
       {
         if(amount<=0)
         {
            throw "Invalid withdrawal amount";
         }
         if(amount> Balance)
         {
            throw "Insufficient balance";
         }
          Balance -= amount;
          cout << "Withdrawal successful.\n";
       }

      void displayAccount()
      {
         cout<<"Account Number"<<AccountNumber;
         cout<<"Account Holder Name"<<AccountHolderName;
         cout<<"Balance"<<Balance;
      }
      
       

};
int main()
{
    int AccountNumber;
    string AccountHolderName;
    double Balance;
    double Deposit;
    double withdraw;

   
    cout<<"Enter Your Account Number: ";
    cin>>AccountNumber;

    cout<<"Enter Account Holder Name: ";
    cin>>AccountHolderName;

    cout<<"Enter Your Account Balance: ";
    cin>>Balance;

   Bank b( AccountNumber, AccountHolderName, Balance);

    cout<<"Enter Deposit Amount: ";
    cin>>Deposit;

    cout<<"Enter Withdraw Amount: ";
    cin>>withdraw;

    try
    {
      b.Deposit(Deposit);
      b.withdraw(withdraw);
    }
    catch( const char *msg)
    {
      cout << "Error: " << msg << endl;  
    }   
}