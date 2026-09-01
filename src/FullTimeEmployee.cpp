#include "FullTimeEmployee.hpp"

FullTimeEmployee::FullTimeEmployee(const std::string& name, int id, double baseSalary, double benefits)
    : Employee(name, id, baseSalary), benefits(benefits) {}

double FullTimeEmployee::calculateSalary() const {
    return baseSalary + benefits;
}
