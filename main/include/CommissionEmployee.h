#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#include<string>
#include<Employee.h>

class CommissionEmployee:public Employee
{
    public:
         double target;
        CommissionEmployee();
        virtual~CommissionEmployee();
        double pay();
        void setPayRoll(double );
        void print();
        void readEmployeeData();

    protected:

    private:

};

#endif // COMMISSIONEMPLOYEE_H
