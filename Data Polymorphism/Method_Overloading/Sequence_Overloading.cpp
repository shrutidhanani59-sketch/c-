#include<iostream>
using namespace std;

class calculator
{
    public:
      // // Sequence

    void add(double a, int b)
    {
        int sum=a+b;
        cout<<"Add 1"<<endl;
        cout<<"Sum = "<<sum<<endl;
    }

    void add(int a, double b)
    {
        int sum=a+b;
        cout<<"Add 1"<<endl;
        cout<<"Sum = "<<sum<<endl;
    }
};
int main()
{
    calculator c1;
    c1.add(10.2, 10);
    c1.add(10, 10.2);
}