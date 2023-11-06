/*Write a C++ program that declares student structure with data members name, std, percentage. Take value for these data members and display it*/
//220130318046
//pansara yashvi
#include <iostream>
#include <string>
using namespace std;
struct Student 
{
    string name;
    int std;
    float percentage;
};
int main() 
{
    Student student;
    cout<<"Enter the student name :: ";
    getline(cin, student.name);
    cout<<"Enter the student standard :: ";
    cin>>student.std;
    cout<<"Enter the student percentage :: ";
    cin>>student.percentage;

    cout<<"\nYour Name is :: "<<student.name << endl;
    cout<<"Your Standard is:: "<<student.std<<endl;
    cout<<"Your Percentage is :: "<<student.percentage <<"%"<<endl;
    
    return 0;
}
