#include<iostream>
using namespace std;
class A
{
    public:
    void show()
    {
        cout<<"Show() is running..."<<endl;
    }
};
class B:public A
{
    public:
    void display()
    {
        cout<<"Display() is running..."<<endl;
    }
};
int main()
{
    A a1;
    a1.show();
    cout<<endl;

    B b1;
    b1.display();
    b1.show();
}