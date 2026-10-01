#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int tem;
     cout<<"brfore swapping:"<<endl;

    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;

    tem=a;
    a=b;
    b=tem;

    cout<<"after swapping:";
    cout<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;


}