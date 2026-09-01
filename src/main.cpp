#include "Menu.hpp"
#include "PayrollSystem.hpp"

int main() {
    PayrollSystem system;
    Menu menu;
    menu.showMenu(system);
    return 0;
}
