#include<iostream>
using namespace std;
class one
{
    public:
        static string city;
};
// scope Resolution operator(::)
string one::city="Rajkot";
int main()
{
    cout<<one::city<<endl;
    cout<<one::city<<endl;
    cout<<one::city<<endl;
}