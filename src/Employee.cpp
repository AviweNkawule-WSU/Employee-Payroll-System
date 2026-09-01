#include "Employee.hpp"
#include <iostream>

Employee::Employee(const std::string& name, int id, double baseSalary)
    : name(name), id(id), baseSalary(baseSalary) {}

void Employee::displayInfo() const {
    std::cout << "ID: " << id << ", Name: " << name 
              << ", Base Salary: " << baseSalary << std::endl;
}

std::string Employee::getName() const { return name; }
int Employee::getId() const { return id; }

