/*Write a C++ program to create class Max with data member’s num_1 and num_2. Member function are input(), display(), largest(). (* Nesting of member functions: A member function can be called by using its name inside another member function of the same class. This is known as nesting of member function.) */
//220130318046
//pansara yashvi
#include <iostream>
using namespace std;
class Max
{
    private:
        int num_1;
        int num_2;
    public:
        void input()
        {
            cout<<"Enter the value of first number :: ";
            cin>>num_1;
            cout<<"Enter the value of seconf number :: ";
            cin>>num_2;
        }
    int max()
    {
        if (num_1>num_2)
        {
            return num_1;
        } else
        {
            return num_2;
        }
    }
    void display()
    {
        cout<<"First number is :: "<<num_1<<endl;
        cout<<"Second number is :: "<<num_2<<endl;
        cout<<"The largest number is: "<<max()<<endl;
    }
};

int main() 
{
    Max maxnum;
    maxnum.input();
    maxnum.display();
    return 0;
}
