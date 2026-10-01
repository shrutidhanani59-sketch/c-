#include<iostream>
using namespace std;

class calculator
{
    public:
    // value
    void add(int a, int b)
    {
        int sum=a+b;
        cout<<"Add 1"<<endl;
        cout<<"Sum = "<<sum<<endl;
    }

    void add(double a, double b)
    {
        double sum=a+b;
        cout<<"Add 2"<<endl;
        cout<<"Sum = "<<sum<<endl;
    }

    
  

};

int main()
{
    calculator c1;
    c1.add(10,20);
    c1.add(10.2, 10.23);
}