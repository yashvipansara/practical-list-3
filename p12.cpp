/*.Write a C++ program to enter number and cost of a class “item” using getdata() and displaydata(). Write getdata() function outside the class item.*/
//220130318046
//pansara yashvi
#include <iostream>
using namespace std;
class item
{
    private:
        int number;
        double cost;
    public:
        void display_data()
        {
            cout<<"Number :: "<<number<<endl;
            cout<<"Cost :: "<<cost<<endl;
        }
    friend void get_data(item &item);
};
void get_data(item &item)
{
    cout<<"Enter item number :: ";
    cin>>item.number;
    cout<<"Enter item cost :: ";
    cin>>item.cost;
}
int main()
{
    item my_item;
    get_data(my_item);
    cout<<"Item Details ::"<<endl;
    my_item.display_data();
    return 0;
}
