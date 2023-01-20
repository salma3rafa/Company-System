#include "salariedEmployee.h"
#include<iostream>
#include<string>
using  namespace std;
salariedEmployee::salariedEmployee()
{

}
salariedEmployee::~salariedEmployee()
{

}
void salariedEmployee::setSalary(double salary)
{
    if(emplyee.getAge()<60)
    {
        this->salary=salary;
    }
    else
        this->salary=(0.5*salary);
}
void salariedEmployee::readEmployeeData(){
    Employee::readEmployeeData();
    cout<<"enter the salary:\n";
    cin>>this->salary;

}
double salariedEmployee::pay()
{
    cout<<"ana hena ya john\n";
   return salary;
}
void salariedEmployee::print()
{
   Employee::print();
   cout<<"  "<<"salary : "<<this->pay();

}

