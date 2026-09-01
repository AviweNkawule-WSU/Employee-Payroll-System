#ifndef PAYROLLSYSTEM_HPP
#define PAYROLLSYSTEM_HPP

#include <vector>
#include "Employee.hpp"

class PayrollSystem {
private:
    std::vector<Employee*> employees;

public:
    ~PayrollSystem();
    void addEmployee(Employee* e);
    void displayPayroll() const;
    void calculateAllSalaries() const;
};

#endif
