#include<iostream>
using namespace std;
class calculator
{
 public:
     // length

    void add(int a, int b)
    {
        int sum=a+b;
        cout<<"Add 1"<<endl;
        cout<<"Sum = "<<sum<<endl;
    }

    void add(int a, int b, int c)
    {
        int sum=a+b+c;
        cout<<"Add 2"<<endl;
        cout<<"Sum = "<<sum<<endl;
    }

};
int main()
{
    calculator c1;
    c1.add(10,20);
    c1.add(10,20, 30);
}