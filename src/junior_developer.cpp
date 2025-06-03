#include "junior_developer.hpp"
#include <iostream>

JuniorDeveloper::JuniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias)
{}

// Solves a problem by printing developer details and a junior-specific message.
void JuniorDeveloper::solve_problem() const {
    std::cout << "Solving a problem:" << std::endl;
    std::cout << *this;
    std::cout << "Ha, that was EZ!" << std::endl;
    Developer::buy_bitcoin();
}