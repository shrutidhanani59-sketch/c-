#include<iostream>
using namespace std;
class cafe
{
 private:
    int cafe_id;
    string cafe_name;
    string cafe_type;
    int cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;

 public:
 cafe()

    {
        this-> cafe_id = cafe_id;
        this->cafe_name = cafe_name;
        this->cafe_type = cafe_type;
        this->cafe_rating = cafe_rating;
        this->cafe_location = cafe_location;
        this-> cafe_establish_year = cafe_establish_year;
        this-> cafe_staff_quantity = cafe_staff_quantity;
    }
   
    // getter
    void details()
    {
        cout<<"cafe_id :"<<cafe_id<<endl;
        cout<<"cafe_name :"<<cafe_name<<endl;
        cout<<"cafe_type"<<cafe_type<<endl;
        cout<<"cafe_rating"<<cafe_rating<<endl;
        cout<<"cafe_location"<<cafe_location<<endl;
        cout<<"cafe_establish_year"<<cafe_establish_year<<endl;
        cout<<"cafe_staff_quantity"<<cafe_staff_quantity<<endl;
    }
};
int main()
{
      int cafe_id;
      cout<<"Enter cafe_id :";
      cin>>cafe_id;

    string cafe_name;
    cout<<"Enter cafe_name: ";
    cin>>cafe_name;

    string cafe_type;
    cout<<"Enter cafe_type :";
    cin>>cafe_type;

    int cafe_rating;
    cout<<"Enter cafe_rating :";
    cin>>cafe_rating;

    string cafe_location;
    cout<<"Enter cafe_location :";
    cin>>cafe_location;

    int cafe_establish_year;
    cout<<"Enter cafe_establish_year :";
    cin>>cafe_establish_year;

    int cafe_staff_quantity;
    cout<<"Enter cafe_staff_quantity :";
    cin>>cafe_staff_quantity;

    cafe c1;
    c1.details();

}