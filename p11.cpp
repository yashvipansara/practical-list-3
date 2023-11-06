/*Create class product. Data members are product_id, product_name, unit_price. Member functions are getData(). [Getting input from user and assigning values to data members. ] and putData() [Display the product information.]. Call both member function for two objects*/
//220130318046
//pansara yashvi
#include <iostream>
#include <string>
using namespace std;
class Product
{
    private:
        int product_id;
        string product_name;
        double unit_price;
    public:
        void getData()
        {
            cout<<"Enter Product ID :: ";
            cin>>product_id;
            cin.ignore();
            cout<<"Enter Product Name :: ";
            getline(cin, product_name);
            cout<<"Enter Unit Price :: ";
            cin>>unit_price;
    }
    void putData()
    {
        cout<<"Product ID :: "<<product_id<<endl;
        cout<<"Product Name :: "<<product_name<<endl;
        cout<<"Unit Price :: "<<unit_price<<endl;
    }
};
int main()
{
    Product pro1,pro2;
    cout<<"Enter first product detail "<<endl;
    pro1.getData();
    pro1.putData();
  
    cout<<"Enter the second product detail "<<endl;
    pro2.getData();
    pro2.putData();
    
    return 0;
}
