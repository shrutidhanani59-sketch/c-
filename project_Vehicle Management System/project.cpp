#include<iostream>
using namespace std;
class Vehicle
{
    protected:
        string Brand;
        int speed;
        string FuelType;

    public:
       Vehicle(string Brand, int speed, string FuelType)
    {
        this->Brand=Brand;
        this->speed=speed;
        this->FuelType=FuelType;  
    }
    void vehicle()
    {
         cout<<"Brand = "<<Brand<<endl;
        cout<<"speed = "<<speed<<endl;
        cout<<"FuelType = "<<FuelType<<endl;
    }

};
class Car: public Vehicle
{
    public:
    int Door;

    Car(string Brand, int speed, string FuelType ,int Door)  : Vehicle(Brand, speed, FuelType)
    {
        this->Door=Door;
    }
    void car()
    {
        vehicle();
        cout<<"Door= "<<Door<<endl;
    }

};
class Bick: public Vehicle
{
    public:
    bool hasGear;

    Bick(string Brand, int speed, string FuelType , int hasGear)  : Vehicle(Brand, speed, FuelType)
    {
        this->hasGear=hasGear;
    }
    void bick()
    {
        vehicle();
        cout<<"HasGear= "<<hasGear;
    }

};
int main()
{
    Car c1("Thar", 150, "petrol", 4);
    Bick b1("Yamaha", 80, "petrol", true);

    c1.car();
    cout<<endl;
    b1.bick(); 
}