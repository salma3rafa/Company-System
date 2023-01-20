#ifndef EXECUTIVEEMPLOYEE_H
#define EXECUTIVEEMPLOYEE_H
#include<salariedEmployee.h>

class ExecutiveEmployee:salariedEmployee
{
    public:
        ExecutiveEmployee();
        virtual ~ExecutiveEmployee();
        void addBonus(double moreBonus);
        double getAddedBonus();
        void print();
        double pay();
        void readEmployeeData();

    protected:

    private:
        double bonus,salary;
        salariedEmployee salaryofEmployee;
};

#endif // EXECUTIVEEMPLOYEE_H
