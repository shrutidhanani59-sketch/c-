#include<iostream>
using namespace std;

class student
{
  private:
    int id;
    string name;
    string subject;
  public:
  student()
  {
    // cout<<"hello"<<endl;

    for(int i=1; i<=10; i++)
    {
        cout<<i<<endl;
    }
  }
};

int main()
{
   student s1;
}