#include<iostream>
using namespace std;
class companies
{
 private:
    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    int comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_raw_diamonds;
    string comp_ceo;

 public:
 companies(int comp_id, 
    string comp_name, 
    int comp_staff_quantity, 
    int comp_revenue, 
    int comp_import_raw_diamonds, 
    int comp_export_raw_diamonds, 
    string comp_ceo)

    {
        this->comp_id = comp_id;
        this->comp_name = comp_name;
        this->comp_staff_quantity = comp_staff_quantity;
        this->comp_revenue = comp_revenue;
        this->comp_import_raw_diamonds = comp_import_raw_diamonds;
        this-> comp_export_raw_diamonds = comp_export_raw_diamonds;
        this-> comp_ceo = comp_ceo;
    }
   
    // getter
    void details()
    {
        cout<<"comp_id :"<<comp_id<<endl;
        cout<<"comp_name :"<<comp_name<<endl;
        cout<<"comp_staff_quantity"<<comp_staff_quantity<<endl;
        cout<<"comp_revenue"<<comp_revenue<<endl;
        cout<<"comp_import_raw_diamonds"<<comp_import_raw_diamonds<<endl;
        cout<<"comp_export_raw_diamonds"<<comp_export_raw_diamonds<<endl;
        cout<<"comp_ceo"<<comp_ceo<<endl;
    }
};
int main()
{
      int comp_id;
      cout<<"Enter Companies ID :";
      cin>>comp_id;

    string comp_name;
    cout<<"Enter Companies Name: ";
    cin>>comp_name;

    int comp_staff_quantity;
    cout<<"Enter Companies staff Quantity :";
    cin>>comp_staff_quantity;

    int comp_revenue;
    cout<<"Enter Companies Revenue :";
    cin>>comp_revenue;

    int comp_import_raw_diamonds;
    cout<<"Enter Companies import raw dimonds :";
    cin>>comp_import_raw_diamonds;

    int comp_export_raw_diamonds;
    cout<<"Enter Companies export raw dimonds :";
    cin>>comp_export_raw_diamonds;

    string comp_ceo;
    cout<<"Enter Companies CEO name :";
    cin>>comp_ceo;

    companies c1(comp_id,
     comp_name, 
     comp_staff_quantity, 
     comp_revenue, 
     comp_import_raw_diamonds, 
     comp_export_raw_diamonds, 
     comp_ceo );
     c1.details();

}