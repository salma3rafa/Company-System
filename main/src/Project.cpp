#include "Project.h"
#include<iostream>
#include<string>
#include<Budget.h>
using namespace std;
Project::Project()
{
   Size=0;
   this->budgetList=new Budget[Size];
}
Project::~Project()
{
    delete budgetList;
}
void Project::readProjectData()
{
    cout<<"            Enter project id : "<<endl;
    cin>>this->projectID;
    if(projectID==staff.getId())
    {
        cout<<"There is an employee with this id \n";
    }
    cout<<"            Enter the project Manager : "<<endl;
    cin>>manager;
    cout<<"            Enter project's location : "<<endl;
    cin>>this->location;
    cout<<"            Enter the project's current cost : \n";
    cin>>this->currentCost;
}
void Project:: setProjectInfo(int id,std::string location,std::string manager,double currentCost)
{
    this->manager=manager;
    this->projectID=id;
    this->location=location;
    this->currentCost=currentCost;

}
std::string Project::getManagerName()
{
    return this->manager;
}
 void Project::addBudget(double value)
 {
     budgetList->increaseBudget(value);
     Size++;
 }
double Project::totalBudget( )
{
    double totalBudget=0;
    for(int i=0;i<Size;i++)
    {
        totalBudget+=budgetList[i].getValue();
    }
    return totalBudget;

}
int Project::getIdProject()
{
    return this->projectID;
}
std::string Project::getLocation()
{
    return this->location;
}
double Project::getCurrentCost()
{
    return this->currentCost;
}
void Project::print()
{
  cout<<"project id : "<<this->getIdProject()<<endl;
  cout<<"Project Manager : "<<this->getManagerName()<<endl;
  cout<<"Project location : "<<this->getLocation()<<endl;
  cout<<"Project total Budget : "<<this->totalBudget()<<endl;
  cout<<"Budget Id : "<<budget.getId()<<endl;
  cout<<"Current cost of broject : "<<this->getCurrentCost()<<endl;

}
