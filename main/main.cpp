#include <iostream>
#include<staff.h>
#include<Project.h>
#include<staffMember.h>
#include<Department.h>

using namespace std;

int main()
{

    int key=-1;
    staff staff(200);
    staffMember staf;
    Project project;
    Department depart;
    while(key!=0)
    {
        cout<<"____________________________________________EMPLOYEES'SITE_________________________________________\n";
        cout<<"\n";
        cout<<"\n";
        cout<<"\t\t\t\t 1-Add new department \n"
               <<"\t\t\t\t 2-print all departments \n"
               <<"\t\t\t\t 3-Add new member \n"
               <<"\t\t\t\t 4-The number of employees \n"
               <<"\t\t\t\t 5-print all members \n"
               <<"\t\t\t\t 6-Calculate payroll \n"
               <<"\t\t\t\t 7- Edit member \n"
               <<"\t\t\t\t 8-Delete member \n"
               <<"\t\t\t\t 9-Add new project \n"
               <<"\t\t\t\t 10-print all projects \n"
               <<"\t\t\t\t 11-Add budget to existing project \n"
               <<"\t\t\t\t 12-Increase budget to existing project \n"
               <<"\t\t\t\t 0-Exit \n";
               cin>>key;
               switch(key)
               {
               case 1:{
                   cout<<"Enter the depart name : \n";
                   std::string name;
                   cin>>name;
                   cout<<"Enter the depart id : \n";
                   int id;
                   cin>>id;
                     depart.setDepartInfo(id,name);
                     }break;
               case 2:
                     depart.print();
                     break;
               case 3:
                   staff.addMember();
                   break;
                   case 4:
                       staff.getCountValue();
                       break;
               case 5:{
                   staff.showAll();


                   }break;
               case 6:
                   staff.calcPayRoll();
                   break;
               case 7:{
                   int id;
                   cout<<"Enter id to edit : \n";
                   cin>>id;
                   staff.editMember(id);
               }
                   break;
               case 8:{
                   cout<<"Enter id to delete : \n";
                   int id;
                   cin>>id;
                   staff.deleteMember(id);
               }break;
               case 9:
                   project.readProjectData();
                   break;
               case 10:
                   project.print();
                   break;
               case 11:
                   double value;
                   cout<<"Enter the budget : \n";
                   cin>>value;
                  project.addBudget(value);
                   break;
               case 12:
                  project.totalBudget();
                  break;
               }

    }
          cout<<"Don't visit us again :) \n";




    return 0;
}
