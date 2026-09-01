#include "PartTimeEmployee.hpp"

PartTimeEmployee::PartTimeEmployee(const std::string& name, int id, double hourlyRate, int hoursWorked)
    : Employee(name, id, 0), hourlyRate(hourlyRate), hoursWorked(hoursWorked) {}

double PartTimeEmployee::calculateSalary() const {
    return hourlyRate * hoursWorked;
}
