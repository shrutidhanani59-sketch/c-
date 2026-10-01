#include<iostream>
using namespace std;

int main()
{
    int mango=10;
    int people=0;

    try
    {
        if(people==0)
        {
            throw "We cannot divide by zero";
        }
        cout<<"This is the possible"<<mango/people<<endl;
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
    }
    return 0;
}