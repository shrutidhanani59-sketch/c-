#include<iostream>
using namespace std;

class student
{
  public:
    int rollno;
    string name;
    float percentage;
    int age;

    int details()
    {
        cout<<rollno<<endl;
        cout<<name<<endl;
        cout<<percentage<<endl;
        cout<<age<<endl;
    }

};


int main()
{
     student s1;
    s1.rollno=1;
    s1.name="shruti";
    s1.percentage=89.6;
    s1.age=13;

     student s2;
     s2.rollno=2;
     s2.name="mansi";
     s2.percentage=78.3;
     s2.age=13;

    //  cout<<s1.name<<endl;
    //  cout<<s2.name<<endl;

    s1.details();
    cout<<endl;
    s2.details();
}