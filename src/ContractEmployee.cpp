#include "ContractEmployee.hpp"

ContractEmployee::ContractEmployee(const std::string& name, int id, double contractAmount)
    : Employee(name, id, 0), contractAmount(contractAmount) {}

double ContractEmployee::calculateSalary() const {
    return contractAmount;
}
