#include<iostream>
using namespace std;

class student
{
    private:
        string name;
        int RollNumber;
        float mark;
    
    public:
      void setstudentsname(string name)
      {
         this->name=name;
      }
      void setrollnumber(int RollNumber)
      {
        this->RollNumber=RollNumber;
      }
      void setmark(float mark)
      {
        if(mark>=0 && mark<=100)
        {
            this->mark=mark;
        }
        else
        {
            cout<<"Invlid mark";
        }
      }
// getter
      void getDetails()
      {
        cout<<"Student name is = "<<this->name<<endl;
        cout<<"Student Roll Number is = "<<this->RollNumber<<endl;
        cout<<"Student mark is = "<<this->mark<<endl;
      }
      

};

int main()
{

    student s[2];
    string name;
    int rollnumber;
    float mark;

    for(int i=0; i<2; i++)
    {
        cout<<"Enter your name:";
    cin>>name;

    cout<<"Enter your Roll Number:";
    cin>>rollnumber;

    cout<<"Enter your Mark:";
    cin>>mark;

    student s1;
    s1.setstudentsname(name);
    s1.setrollnumber(rollnumber);
    s1.setmark(mark);
    cout<<endl;
    s1.getDetails();
    cout<<endl;
    }

    

   
}