#include "developer.hpp"
#include <fstream>
#include <sstream>

// Constructor: Initialize name and alias; logo remains empty.
Developer::Developer(const std::string& name, const std::string& alias)
    : name(name), alias(alias), logo("")
{}

// Getter methods
std::string Developer::getName() const {
    return name;
}

std::string Developer::getAlias() const {
    return alias;
}

std::string Developer::getLogo() const {
    return logo;
}

// Prints the bitcoin message.
void Developer::buy_bitcoin() {
    std::cout << "Ahhhh, I needed that bitcoin!!!" << std::endl;
}

// Loads a logo from a text file and stores it in the logo member.
// Throws a runtime_error if the file cannot be opened.
void Developer::load_logo_from_file(const std::string& filename) {
    std::string fullPath = std::string(LOGO_PATH) + filename;
    std::ifstream file(fullPath);
    if (!file) {
        throw std::runtime_error("Logo file not found: " + fullPath);
    }
    std::stringstream buffer;
    buffer << file.rdbuf();
    logo = buffer.str();
}

// Overload of the << operator for Developer objects.
std::ostream& operator<<(std::ostream& os, const Developer& dev) {
    if (!dev.getLogo().empty())
        os << dev.getLogo() << std::endl;
    os << "Name: " << dev.getName() << std::endl;
    os << "Alias: " << dev.getAlias() << std::endl;
    return os;
}