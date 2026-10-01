#include<iostream>
using namespace std;
class BankAccount
{
  protected:
    string AccountHolderName;
    int AccountNumber;
    float Balance;
public:
    BankAccount(string AccountHolderName, int AccountNumber, float Balance)
    {
        this->AccountHolderName=AccountHolderName;
        this->AccountNumber=AccountNumber;
        this->Balance=Balance;
    }
    void Details()
    {
        cout<<"Account Holder Name:"<<AccountHolderName<<endl;
        cout<<"Account Number:"<<AccountNumber<<endl;
        cout<<"Account Balance:"<<Balance<<endl;
    }
};
class SavingsAccount:public BankAccount
{
    public:
        float InterestRate;

    SavingsAccount(string AccountHolderName, int AccountNumber, float Balance , int InterestRate): BankAccount( AccountHolderName,  AccountNumber,  Balance)
    {
        this->InterestRate=InterestRate;
    }
    void saving()
    {
        Details();
       cout<<"Interest Rate: "<<InterestRate<<endl; 
    }

};
class CurrentAccount: public BankAccount
{
    public:
        int overdraftLimit;
        CurrentAccount(string AccountHolderName, int AccountNumber, float Balance , int overdraftLimit): BankAccount( AccountHolderName,  AccountNumber,  Balance)
    {
        this->overdraftLimit=overdraftLimit;
    }
    void current()
    {
      Details();
       cout<<"Overdraft Limit: "<<overdraftLimit<<endl;
    
    }

};
int main()
{
    string AccountHolderName;
    int AccountNumber;
    float Balance;
    float InterestRate;
    int overdraftLimit;

    cout<<"Enter Account Holder Name: ";
    cin>>AccountHolderName;
    cout<<endl;

    cout<<"Enter Account Number: ";
    cin>>AccountNumber;
    cout<<endl;

    cout<<"Enter Account Balance: ";
    cin>>Balance;
    cout<<endl;

    cout<<"Enter Interest Rate: ";
    cin>>InterestRate;
    cout<<endl;

    cout<<"Enter Overdraft Limit: ";
    cin>>overdraftLimit;
    cout<<endl;

    SavingsAccount s1(AccountHolderName, AccountNumber, Balance, InterestRate);
    cout<<endl;
    CurrentAccount c1(AccountHolderName, AccountNumber, Balance, overdraftLimit);

    s1.saving();
    cout<<endl;
    c1.current();
}