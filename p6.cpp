//6. Write a C++ program to create class Shape with public data member’s height & base. Member function are display_shape(). Call member function using object of the class. (* scope resolution operator method define outside the class). 
 //220130318046
//pansara yashvi
 #include<iostream>
using namespace std;
class Shape
{
public:
    int height;
    int base;
    void display_shape();
};
void Shape::display_shape()
{
    cout<<"Height is :: "<<height<<"cm"<<endl;
    cout<<"Base is :: "<<base<<"cm"<<endl;
}
int main()
{
    Shape myShape;
    cout<<"Enter the height in centimeter ::";
    cin>>myShape.height;
    cout<<"Enter the base in centimeter ::";
    cin>>myShape.base;
    myShape.display_shape();
    return 0;
}
