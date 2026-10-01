#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    float precentage;
    int total;

    cout<<"Enter the value of a:";
    cin>>a;

    cout<<"Enter the value of b:";
    cin>>b;

    cout<<"Enter the value of c:";
    cin>>c;

    cout<<"Enter the value of d:";
    cin>>d;

    cout<<"Enter the value of e:";
    cin>>e;

    total=a+b+c+d+e;
    precentage=(total/5)*100;

    cout<<"Precentage is:"<<precentage;
}