/*Write a C++ program to declare structure of Employee with data members like emp_name, emp_code, emp_salary, emp_branch and also display contents/values of member variables. */
//220130318046
//pansara yashvi
#include <iostream>
#include <string>
using namespace std;
struct Employee
{
    string name;
    int code;
    int salary;
    string branch;
};
int main()
{
    Employee emp;
    cout<<"Enter the employee name :: ";
    getline(cin, emp.name);
    cout<<"Enter the employee branch :: ";
    getline(cin, emp.branch);
    cout<<"Enter the  employee code :: ";
    cin>>emp.code;
    cout<<"Enter the employee salary :: ";
    cin>>emp.salary;

    cout<<"\nName is :: "<<emp.name<< endl;
    cout<<"Employee Code is :: "<<emp.code<<endl;
    cout<<"Salary is :: "<<emp.salary<<endl;
    cout<<"Branch is :: "<<emp.branch<<endl;
    return 0;
}
