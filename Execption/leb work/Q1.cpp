#include<iostream>
using namespace std;

int main()
{
    int Number=10;
    int divide=2;

    try
    {
       if(divide==0)
       {
          throw "can not divided zero";
       } 
       cout<<"result:"<<Number/divide<<endl;
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
        
    }
    
}