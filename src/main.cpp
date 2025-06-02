#include <iostream>
#include <vector>
#include <memory>
#include "junior_developer.hpp"
#include "senior_developer.hpp"

int main() {
    // Create a vector of shared_ptr<Developer>
    std::vector<std::shared_ptr<Developer>> developers;

    // Dynamically instantiate Developer objects
    auto junior = std::make_shared<JuniorDeveloper>("Diana Prince", "Wonder Woman");
    auto senior = std::make_shared<SeniorDeveloper>("Peter Parker", "Spiderman");

    // Load logos (ensure the files exist in the path defined by LOGO_PATH)
    try {
        junior->load_logo_from_file("logo_junior.txt");
    } catch (const std::exception& e) {
        std::cerr << "Error loading logo (JuniorDeveloper): " << e.what() << std::endl;
    }

    try {
        senior->load_logo_from_file("logo_senior.txt");
    } catch (const std::exception& e) {
        std::cerr << "Error loading logo (SeniorDeveloper): " << e.what() << std::endl;
    }

    // Add the Developer objects to the vector
    developers.push_back(junior);
    developers.push_back(senior);

    // Iterate over the vector and have each Developer solve a problem
    for (const auto& dev : developers) {
        dev->solve_problem();
        std::cout << std::endl; // Print a blank line for separation
    }
    
    return 0;
}