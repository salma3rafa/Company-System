#include "staffMember.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
staffMember::staffMember()
{

}
staffMember::~staffMember()
{

}
void staffMember::readEmployeeData()
{
    cout<<"Enter the employee's name : "<<endl;
    cin>>this->name;
    cout<<"Enter id : "<<endl;
    cin>>this->employeeID;
    cout<<"Enter Phone : "<<endl;
    cin>>this->phone;
    cout<<"Enter email : "<<endl;
    cin>>this->email;
    int departid;
    cout<<"Enter the Depart id : \n";
    cin>>departid;
    std::string departname;
    cout<<"Enter the depart name : \n";
    cin>>departname;
    this->setDepart(departid,departname);
}
void staffMember::setMemberInfo(int employeeID,std::string name,std::string phone,std::string email,int age)
{
    this->employeeID=employeeID;
    this->name=name;
    this-> phone=phone;
    this->email=email;
    this->age=age;
}
void staffMember::setDepart(int departid,std::string departname)
{
    depart.setDepartInfo(departid,departname);

}
int staffMember::getAge()
{
    return age;
}
int staffMember::getId()
{
    return this->employeeID;
}
std::string staffMember::getName()
{
    return this->name;
}
std::string staffMember::getPhone()
{
    return this->phone;
}
std::string staffMember::getEmail()
{
    return this->email;
}
void staffMember::print()
{
  depart.print();
  cout<<"  The staff name "<<this->getName()<<"   id : "<<this->getId()<<"  Age : "<<this->getAge()<<"   Email : "<<this->getEmail()<<"  Phone : "<<this->getPhone();
}
bool staffMember::Search(int key)
{
    switch(key)
    {
    case 1:
        {
            std::string name;
            cout<<"\t\t\t\t\t\t\t\t\t\tEnter The employee name to search : \n";
            cin>>name;
            if(name==this->name)
            {
                return 1;
            }
        }break;
    case 2:
        {
            int id;
            cout<<"\t\t\t\t\t\t\t\t\t\tEnter the employee id to search : \n";
            cin>>id;
            if(id==employeeID)
            {
                return 1;
            }
        }
    break;
    case 3:
        {
            std::string phone;
            cout<<"\t\t\t\t\t\t\t\t\t\tEnter the employee phone to search : \n";
            cin>>phone;
            if(phone==this->phone)
            {
                return 1;
            }
        }break;
    case 4:{
        std::string email;
        cout<<"\t\t\t\t\t\t\t\t\t\tEnter the employee email to search : \n";
        cin>>email;
        if(email==this->email)
        {
            return 1;
        }
    }break;
    }
    return 0;
}

double staffMember::pay()
{
    return 0;
}


