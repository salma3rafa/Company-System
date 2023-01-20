#include "Volunteer.h"
#include<string>
#include<iostream>
using namespace std;
Volunteer::Volunteer()
{

}
Volunteer::~Volunteer()
{

}
void Volunteer ::readEmployeeData()
{
    staffMember::readEmployeeData();
    cout<<"Enter the amount : \n";
    cin>>this->amount;
    setAmount(amount);
}
void Volunteer::setAmount(double amount)
{
    this->amount=amount;
}
double Volunteer::pay()
{
   return this->amount;
}
void Volunteer::print()
{
    staffMember::print();
    cout<<"  ";
  cout<<this->pay();

}

