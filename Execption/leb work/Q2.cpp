#include<iostream>
using namespace std;

int main()
{
    int age=10;
    try
    {
        if(age>=18)
        {
            cout<<"You can voate";
        }
        if(age<18)
        {
            cout<<"You can note voate";
        }
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
        
    }
    
    
}