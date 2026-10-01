#include<iostream>
using namespace std;

class A
{
    public:
    virtual void Display();
    virtual void flying();
    void show()
    {
        cout<<"show method is running"<<endl;
    }
    

};
class B:public A
{
  public:
    void Display() 
    {
        cout<<"Display method is running"<<endl;
    }
    void flying()
    {
        cout<<"flying method is running"<<endl;
    }
};
class C:public A
{
    public:
     void Display() 
    {
        cout<<"Display method is running"<<endl;
    }
    void flying()
    {
        cout<<"flying method is running"<<endl;
    }

};

int main()
{

    B b1;
    b1.Display();
    b1.flying();
    
    C c1;
    c1.Display();  


}