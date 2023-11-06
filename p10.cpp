/*Write a C++ program using class to find maximum number from three numbers. */
//220130318046
//pansara yashvi
#include <iostream>
using namespace std;
class Max
{
private:
    int num1;
    int num2;
    int num3;

public:
    void input()
    {
        cout<<"Enter the value of first number :: ";
        cin>>num1;
        cout<<"Enter the value of second number :: ";
        cin>>num2;
        cout<<"Enter the value of third number :: ";
        cin>>num3;
    }
    int findMax()
    {
        int max = num1;

        if (num2 > max)
        {
            max = num2;
        }

        if (num3 > max)
        {
            max = num3;
        }

        return max;
    }
    void displayMax()
    {
        cout<<"First number is :: "<<num1<<endl;
        cout<<"Second number is :: "<<num2<<endl;
        cout<<"Third number is :: "<<num3<<endl;
        cout<<"The maximum number is :: "<<findMax()<<endl;
    }
};

int main()
{
    Max maxnum;
    maxnum.input();
    maxnum.displayMax();
    return 0;
}
