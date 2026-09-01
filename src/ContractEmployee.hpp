#ifndef CONTRACTEMPLOYEE_HPP
#define CONTRACTEMPLOYEE_HPP

#include "Employee.hpp"

class ContractEmployee : public Employee {
private:
    double contractAmount;

public:
    ContractEmployee(const std::string& name, int id, double contractAmount);
    double calculateSalary() const override;
};

#endif
