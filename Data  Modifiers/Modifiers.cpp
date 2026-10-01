#include<iostream>
using namespace std;
class Employee
{
    private:
        int salary=1000;
    public:
        string name= "shruti";
    protected:
        int empID= 10503;
        
    void details()
    {
        cout<<salary<<endl;
        cout<<name<<endl;
        cout<<empID<<endl;
    }
};
class Demo: public Employee
{
    public:
    void show()
    {
       cout<<empID;
    }
};
int main()
{
    Employee e1;
    cout<<e1.name;
    cout<<endl;

    Demo d1;
    d1.show();
}