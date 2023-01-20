#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include<Employee.h>
class HourlyEmployee:public Employee
{
    public:
        HourlyEmployee();
        virtual ~HourlyEmployee();
        void setSalary(double,double);
        void addHours(int moreHours);
        double pay();
        void print();
        void readEmployeeData();
    protected:

    private:
        double hoursWorked;
        double rate;
};

#endif // HOURLYEMPLOYEE_H
