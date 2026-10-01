#include<iostream>
using namespace std;
class calculator
{
    public:
    void add(int a, int b)
    {
       int sum=a+b;
       cout<<"Add 1"<<endl;
       cout<<"sum= "<<sum<<endl;
    }
};
class show: public calculator
{
    public:
        void add(double a, int b)
        {
            int sum=a+b;
            cout<<"Add 1"<<endl;
            cout<<"sum= "<<sum<<endl;
        }

};

int main()
{
    show s1;
    s1.add(10,20);
    s1.add(10.2,20);
}