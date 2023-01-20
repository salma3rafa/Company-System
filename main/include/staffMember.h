#ifndef STAFFMEMBER_H
#define STAFFMEMBER_H
#include<Department.h>

class staffMember
{
    public:
        staffMember();
        virtual~staffMember();
        virtual void print();
       void setMemberInfo(int ,std::string, std::string,std::string,int);
      std::string getName();
      std::string getPhone();
      std::string getEmail();
       int getAge();
       virtual double pay();
       void readEmployeeData();
       void setDepart(int,std::string);
       int getId();
       bool Search(int key);
       void setdepart();

    protected:
        int employeeID,age;
        std::string name,phone,email;
        Department depart;

    private:
};

#endif // STAFFMEMBER_H
