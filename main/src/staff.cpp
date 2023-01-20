#include "staff.h"
#include<string>
#include<iostream>
using namespace std;
staff::staff(int s)
{
  Size=s;
  this-> staffList=new staffMember*[Size];
  countValue=0;

}

staff::~staff()
{
   delete []staffList;
}
void staff::calcPayRoll()
{
    double payRoll=0;
   for(int i=0;i<countValue;i++)
   {
       payRoll+=this->staffList[i]->pay();

   }
   cout<<"Totall pay roll : "<<payRoll<<endl;

}
void staff::addMember()
{
    string type;
    cout<<"enter employee's type\n";
    cin>>type;
    if(type == "hourly"){
        HourlyEmployee employee;
        employee.readEmployeeData();
        staffList[countValue]=&employee;

    }else if(type=="commission")
    {
          CommissionEmployee employee;
        employee.readEmployeeData();
        staffList[countValue]=&employee;
    }else if(type=="executive")
    {
         ExecutiveEmployee employee;
        employee.readEmployeeData();
//       staffList[countValue++]=employee;
    }
    else if(type=="salaried")
    {
        salariedEmployee employee;
        employee.readEmployeeData();
        staffList[countValue]=&employee;

    }
    else if(type=="volunteer")
    {
         Volunteer employee;
        employee.readEmployeeData();
       staffList[countValue]=&employee;
    }
    countValue++;


}
void staff::editMember(int id)
{
     bool edit=0;
     for(int i=0;i<countValue;i++)
     {
         if(staffList[i]->getId()==id)
         {
             staffList[i]->readEmployeeData();
             edit=1;
            break;
         }


     }
     if(edit)
        cout<<"\t\t\t\t\t\t\t\tEmployee edited \n";
     else
        cout<<"\t\t\t\t\t\t\t\tThis id isn't in the system \n";


}
void staff::deleteMember(int id)
{
    bool deleted=0;
    for(int i=0;i<countValue;i++)
    {
        if(staffList[i]->getId()==id)
        {

            staffList[i]=staffList[countValue-1];
            countValue--;

            deleted=1;
            break;
        }


    }
    if(deleted)
    {
        cout<<"User deleted \n";
    }else
        cout<<"This id is not in the system \n";

}
void staff::showAll()
{
    for(int i=0;i<countValue;i++)
    {
        cout<<"______________________ \n";
        staffList[i]->print();
        cout<<"\n";
        cout<<"______________________ \n";
    }

}
void staff::getCountValue()
{
  cout<<"The number of employee in the system : "<<this->countValue<<endl;
  cout<<"\n";
}
void staff::Search(int key)
{
      int found=0;
      for(int i=0;i<countValue;i++)
      {
          if(staffList[i]->Search(key))
          {
              staffList[i]->print();
              found=1;
          }
          if(found==0)
            cout<<"There is no employee \n";

      }
}

