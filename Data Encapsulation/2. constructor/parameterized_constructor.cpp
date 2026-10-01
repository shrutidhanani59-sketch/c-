#include<iostream>
using namespace std;
class student
{
 private:
    int id;
    string name;
    string subject;
 public:
 student(int id, string name,string subject)
 {
    this->id=id;
    this->name=name;
    this->subject=subject;
 }

//  getter
void details()
{
    cout<<"ID :"<<id<<endl;
    cout<<"Name :"<<name<<endl;
    cout<<"Subject :"<<subject<<endl;
}
};
int main()
{

    int id;
    string name;
    string subject;
    cout<<"Enter your ID: ";
    cin>>id;

    cout<<"Enter your Name: ";
    cin>>name;

    cout<<"Enter your Subject: ";
    cin>>subject;

    student s1(id, name, subject);
    s1.details();
    cout<<endl;
   
}