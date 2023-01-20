#include "Employee.h"
#include<String>
#include<iostream>
using namespace std;
Employee::Employee()
{

}
Employee::~Employee()
{

}
void Employee::readEmployeeData()
{
    staffMember::readEmployeeData();
    cout<<"Enter social security number : \n";
    cin>>this->socialSecurityNumber;
}
void Employee::setSocialSecurityNumber(string securityNum)
{
    this->socialSecurityNumber=securityNum;
}
std::string Employee::getEmployeeData()
{
    return socialSecurityNumber;
}
void Employee::print()
{
   staffMember::print();
   cout<<"   The social security number : "<<getEmployeeData()<<"\n";

}
double Employee::pay()
{
   return 0;
}

