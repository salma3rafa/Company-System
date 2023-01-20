#include "HourlyEmployee.h"
#include<string>
#include<iostream>
using namespace std;
HourlyEmployee::HourlyEmployee()
{

}
HourlyEmployee::~HourlyEmployee()
{

}
void HourlyEmployee::setSalary(double hoursWorked,double rate)
{
    this->hoursWorked=hoursWorked;
    this->rate=rate;
}
void HourlyEmployee::readEmployeeData()
{
    Employee::readEmployeeData();
    cout<<"Enter the worked hours : \n";
    cin>>this->hoursWorked;
    cout<<"Enter the rate : \n";
    cin>>this->rate;
    setSalary(hoursWorked,rate);
}
void HourlyEmployee::addHours(int moreHours)
{

    hoursWorked+=moreHours;

}
double HourlyEmployee::pay()
{
    return rate*hoursWorked;
}
void HourlyEmployee::print()
{
    Employee::print();
    cout<<"  rate : "<<this->rate<<"  hours worked : "<<this->hoursWorked<<this->pay();
}
