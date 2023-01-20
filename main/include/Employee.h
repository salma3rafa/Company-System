#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<staffMember.h>

class Employee:public staffMember
{
    public:
        Employee();
        virtual~Employee();
        virtual void print();
        virtual double pay();
        void setSocialSecurityNumber(std::string);
        std::string getEmployeeData();
       void readEmployeeData();

    protected:
        std::string managerName;
        std::string socialSecurityNumber;

    private:
};

#endif // EMPLOYEE_H
