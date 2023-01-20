#ifndef PROJECT_H
#define PROJECT_H
#include<Budget.h>
#include<Employee.h>
#include<staffMember.h>
class Project
{
    public:
        Project();
        virtual~Project();
        void setProjectInfo(int,std::string,std::string,double);
        int getIdProject();
        std::string getLocation();
        Employee getEmployee();
        double getCurrentCost();
      void addBudget(double value);
      double totalBudget();
      void readProjectData();
      std::string getManagerName();
       void print();

    protected:

    private:
        int projectID,Size;
        std::string location;
        std::string manager;
        double currentCost;
        Budget* budgetList;
        Budget budget;
        staffMember staff;
};

#endif // PROJECT_H
