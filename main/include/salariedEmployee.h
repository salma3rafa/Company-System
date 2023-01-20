#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include<Employee.h>

class salariedEmployee:public Employee
{
    public:
        salariedEmployee();
        virtual ~salariedEmployee();
       virtual double pay();
       virtual void print();
       void setSalary(double);
       double salary;
       void readEmployeeData();
    protected:

    private:

        Employee emplyee;
};

#endif // SALARIEDEMPLOYEE_H
