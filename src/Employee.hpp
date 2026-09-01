#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <string>

class Employee {
protected:
    std::string name;
    int id;
    double baseSalary;

public:
    Employee(const std::string& name, int id, double baseSalary);
    virtual ~Employee() {}

    virtual double calculateSalary() const = 0; // Pure virtual
    virtual void displayInfo() const;

    std::string getName() const;
    int getId() const;
};

#endif
