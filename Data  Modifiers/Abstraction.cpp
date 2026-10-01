#include<iostream>
using namespace std;
class one
{
    public:
     int a=10;
    
    protected:
        int b=20;
    
    public:
        int c=30;
};
class show: public one
{
    // public ->public
    // protected ->protected
};
class show: protected one
{
    // public -> protected
    // protected ->protected
};
class show: private one
{
    // public ->private
    // protected ->private
};

// 3 class:normal class, Abstract class, Interface
// 3 function: Normal Function, virtual Function, puro virtual Function