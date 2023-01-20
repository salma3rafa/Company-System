#ifndef BUDGET_H
#define BUDGET_H


class Budget
{
    public:
        Budget();
        virtual ~Budget();
        void increaseBudget(double amount);
        void setBudget(int,double);
        int getId();
        double getValue();

    protected:

    private:
        int id;
        double value;
};

#endif // BUDGET_H
