/*Write a C++ program to demonstrate use of class employee.(*Variable declares in private section & method declaration inpublic) */
//220130318046
//pansara yashvi
#include <iostream>
#include <string>
using namespace std;
class Employee 
{
private:
    string name;
    int id;
    int salary;

public:
    void get_detail()
    {
        cout<<"Enter the emplotee name :: ";
        cin>>name;

        cout<<"Enter the employee id :: ";
        cin>>id;

        cout<<"Enter the employee salary ::";
        cin>>salary;
    }

    void display_detail()
    {
        cout<<"\nEmployee name is ::"<<name<<endl;
        cout<<"Employee Id is :: "<<id<<endl;
        cout<<"Employee salary is :: "<<salary<<endl;
    }
};

int main()
{
    Employee emp;
    emp.get_detail();
    emp.display_detail();
    return 0;
}
