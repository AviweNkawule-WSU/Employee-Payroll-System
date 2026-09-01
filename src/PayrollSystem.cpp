#include "PayrollSystem.hpp"
#include <iostream>

PayrollSystem::~PayrollSystem() {
    for (auto e : employees) {
        delete e;
    }
}

void PayrollSystem::addEmployee(Employee* e) {
    employees.push_back(e);
}

void PayrollSystem::displayPayroll() const {
    for (auto e : employees) {
        e->displayInfo();
        std::cout << "Calculated Salary: " << e->calculateSalary() << "\n";
    }
}

void PayrollSystem::calculateAllSalaries() const {
    for (auto e : employees) {
        std::cout << e->getName() << " Salary: " << e->calculateSalary() << "\n";
    }
}
