#ifndef FULLTIMEEMPLOYEE_HPP
#define FULLTIMEEMPLOYEE_HPP

#include "Employee.hpp"

class FullTimeEmployee : public Employee {
private:
    double benefits;

public:
    FullTimeEmployee(const std::string& name, int id, double baseSalary, double benefits);
    double calculateSalary() const override;
};

#endif
