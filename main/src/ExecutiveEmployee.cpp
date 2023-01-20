#include "ExecutiveEmployee.h"
#include<iostream>
#include<string>
using namespace std;
ExecutiveEmployee::ExecutiveEmployee()
{

}
ExecutiveEmployee::~ExecutiveEmployee()
{

}
void ExecutiveEmployee::addBonus(double moreBonus)
{
    this-> bonus=moreBonus;
}
double ExecutiveEmployee::pay()
{
    if(salaryofEmployee.getAge()<60){
    salary=salary*bonus;
    return salary;
    }
    else
    {
        return 0;
        cout<<"The employee can not have bonus because he is retired \n";
    }
}
void ExecutiveEmployee::readEmployeeData()
{
    salariedEmployee::readEmployeeData();
    cout<<"Enter bonus : \n";
    cin>>this->bonus;
    addBonus(bonus);
}
void ExecutiveEmployee::print()
{
    salariedEmployee::print();
    cout<<"   bonus : "<<this->bonus<<"  salary after bonus : "<<this->salary;

}
