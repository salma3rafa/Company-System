#ifndef STAFF_H
#define STAFF_H
#include<staffMember.h>
#include<HourlyEmployee.h>
#include<salariedEmployee.h>
#include<CommissionEmployee.h>
#include<ExecutiveEmployee.h>
#include<Volunteer.h>

class staff
{
    public:
        staff();
        staff(int s);
        virtual ~staff();
        void calcPayRoll();
        void addMember();
        void deleteMember(int);
        void showAll();
        void editMember(int);
        void Search(int key);
        void getCountValue();

    protected:

    private:
        int Size,employeeID;
        int countValue,age;
        std::string name,phone,email;
        staffMember** staffList;
};

#endif // STAFF_H
