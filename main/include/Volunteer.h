#ifndef VOLUNTEER_H
#define VOLUNTEER_H
#include<staffMember.h>

class Volunteer:public staffMember
{
    public:
        Volunteer();
        virtual~Volunteer();
       void print();
       double pay();
       void setAmount(double);
       void readEmployeeData();
    protected:

    private:
        double amount;
};

#endif // VOLUNTEER_H
