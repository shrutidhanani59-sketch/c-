#include<iostream>
using namespace std;
class Bank
{
  private:
    int pin;
    int accountBalance;

  public:
  void setbalance(int pin, int accountbalance)
  {
    if(pin==this->pin)
    {
      this->accountBalance=accountBalance;
      cout<<"Account Balance is updated successfully"<<endl;
    }
    else
    {
      cout<<"Invalid pin";
    }
  }

  void getbalance(int pin)
  {
    if(pin==this->pin)
    {
      cout<<"Account Balance = "<<this->accountBalance<<endl;
    }
  }
};
int main()
{
  int pin;
  int balance;

  cout<<"Enter your account pin";
  cin>>pin;

  cout<<"Enter Balance";
  cin>>balance;

  Bank b1;
  b1.setbalance(balance, pin);
  b1.getbalance(pin);
}
