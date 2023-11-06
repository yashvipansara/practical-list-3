/* Write a C++ program to create class Distance with private data member's feet & inches. Member function are get_distance() & display_distance(). Call both member functions using object of the class.*/
//220130318046
//pansara yashvi
#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    float inches;

public:
    void get_distance()
    {
        cout<<"Enter the feet :: ";
        cin>>feet;

        cout<<"Enter the inches :: ";
        cin>>inches;
    }

    void display_distance()
    {
        cout<<"\nDistance Details ::"<<endl;
        cout<<"Feet :: "<<feet<<endl;
        cout<<"Inches :: "<<inches<<endl;
    }
};

int main()
{
    Distance distance;
    distance.get_distance();
    distance.display_distance();
    return 0;
}
