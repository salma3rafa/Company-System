#include "Budget.h"
#include<iostream>
using namespace std;
Budget::Budget()
{

}
Budget::~Budget()
{

}
void Budget::setBudget(int id,double value)
{
    this->id=id;
    this->value=value;
}
void Budget::increaseBudget(double amount)
{
   if(amount>0)
   {
       this->value+=amount;
   }
   else
   value=value;
}
int Budget::getId()
{
    return id;
}
double Budget::getValue()
{
    return value;
}
