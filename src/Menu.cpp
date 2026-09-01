#include "Menu.hpp"
#include "FullTimeEmployee.hpp"
#include "PartTimeEmployee.hpp"
#include "ContractEmployee.hpp"
#include <iostream>

void Menu::showMenu(PayrollSystem& system) {
    int choice;
    do {
        std::cout << "\n--- Payroll Menu ---\n";
        std::cout << "1. Add Full-Time Employee\n";
        std::cout << "2. Add Part-Time Employee\n";
        std::cout << "3. Add Contract Employee\n";
        std::cout << "4. Display Payroll\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        if (choice == 1) {
            std::string name; int id; double base, benefits;
            std::cout << "Enter name, id, base salary, benefits: ";
            std::cin >> name >> id >> base >> benefits;
            system.addEmployee(new FullTimeEmployee(name, id, base, benefits));
        } else if (choice == 2) {
            std::string name; int id, hours; double rate;
            std::cout << "Enter name, id, hourly rate, hours worked: ";
            std::cin >> name >> id >> rate >> hours;
            system.addEmployee(new PartTimeEmployee(name, id, rate, hours));
        } else if (choice == 3) {
            std::string name; int id; double contract;
            std::cout << "Enter name, id, contract amount: ";
            std::cin >> name >> id >> contract;
            system.addEmployee(new ContractEmployee(name, id, contract));
        } else if (choice == 4) {
            system.displayPayroll();
        }
    } while (choice != 0);
}
