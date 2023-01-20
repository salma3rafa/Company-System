#include "CommissionEmployee.h"
#include<string>
#include<iostream>
using namespace std;
CommissionEmployee::CommissionEmployee()
{

}
CommissionEmployee::~CommissionEmployee()
{

}
void CommissionEmployee::setPayRoll(double target)
{
    if(target>0){
    this->target=((5/100)* target);
    }
    else
        cout<<"There is no target for employee \n";
}
void CommissionEmployee::readEmployeeData()
{
    Employee::readEmployeeData();
    cout<<"Enter target : \n";
    cin>>this->target;
    setPayRoll(target);
}
double CommissionEmployee::pay()
{
    return target;
}
void CommissionEmployee::print()
{
    Employee::print();
    cout<<"   target : "<<this->target;
}
