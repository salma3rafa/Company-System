#include "Department.h"
#include<iostream>
#include<string>
using namespace std;
Department:: Department()
 {

 }
Department::~Department()
{

}
void Department::setDepartInfo(int departID,std::string departName)
{
    this->departID=departID;
    this->departName=departName;
}
int Department::getId()
{
    return departID;
}
std::string Department::getDepartName()
{
    return departName;
}
void Department::print()
{
  cout<<"The Department information is : "<<getId()<<"  "<<getDepartName()<<endl;
}
