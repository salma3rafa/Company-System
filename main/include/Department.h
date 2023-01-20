#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include<string>

class Department
{
    public:
        Department();
        virtual ~Department();
        void print();
        void setDepartInfo(int departID,std::string dapartName);
        int getId();
        std::string getDepartName();
    protected:

    private:
        int departID;
        std::string departName;
};

#endif // DEPARTMENT_H
