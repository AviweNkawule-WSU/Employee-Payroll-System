#ifndef PARTTIMEEMPLOYEE_HPP
#define PARTTIMEEMPLOYEE_HPP

#include "Employee.hpp"

class PartTimeEmployee : public Employee {
private:
    int hoursWorked;
    double hourlyRate;

public:
    PartTimeEmployee(const std::string& name, int id, double hourlyRate, int hoursWorked);
    double calculateSalary() const override;
};

#endif
