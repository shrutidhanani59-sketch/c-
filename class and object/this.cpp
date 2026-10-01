#include<iostream>
using namespace std;
class test
{
  public:
    int a=268;

    void details(int a)
    {
       cout<<a<<endl;
    //    cout<<b<<endl;
       cout<<this -> a<<endl;
    }
};



int main()
{
   test t1;
   test t2;
//    cout<<t1.a;

   t1.details(10);
   cout<<endl;
   t2.details(20);
}