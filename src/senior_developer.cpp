#include "senior_developer.hpp"
#include <iostream>

SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias)
{}

// Solves a problem by printing developer details and a senior-specific message.
void SeniorDeveloper::solve_problem() const {
    std::cout << "Solving a problem:" << std::endl;
    std::cout << *this;
    std::cout << "Puh, that was tough" << std::endl;
    Developer::buy_bitcoin();
}