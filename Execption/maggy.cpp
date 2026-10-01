#include<iostream>
using namespace std;

int main()
{
    int maggy=5;
    int gase=5;
    int water=0;

    try
    {
        if(maggy==0)
        {
            throw "We dont't have maggy";
        }
        if(gase==0)
        {
            throw 2;
        }
        if(water==0)
        {
            throw 404;
        }
        cout<<"We have make a meggy";
        
    }
    catch(int msg)
    {
        cout<<msg<<endl;
    }
    catch( const char *msg)
    {
        cout<<msg<<endl;
    }
}