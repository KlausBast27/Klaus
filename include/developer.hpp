#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

#include <string>
#include <stdexcept>
#include <iostream>

/**
 * @brief The Developer base class.
 *
 * This class serves as the base class for all Developer types.
 * It contains the developer's name, alias, and logo.
 */
class Developer {
protected:
    std::string name;   ///< The developer's name.
    std::string alias;  ///< The developer's alias.
    std::string logo;   ///< The developer's logo (loaded from a file).
public:
    /**
     * @brief Constructor for Developer.
     * @param name The developer's name.
     * @param alias The developer's alias.
     */
    Developer(const std::string& name, const std::string& alias);
    virtual ~Developer() = default;

    /**
     * @brief Loads a logo from a file.
     *
     * The file is read from the path defined by the compiler definition LOGO_PATH.
     * @param filename The filename of the logo file.
     * @throws std::runtime_error If the file cannot be opened.
     */
    void load_logo_from_file(const std::string& filename);

    // Getter methods.
    /**
     * @brief Get the developer's name.
     * @return Name as string.
     */
    std::string getName() const;

    /**
     * @brief Get the developer's alias.
     * @return Alias as string.
     */
    std::string getAlias() const;

    /**
     * @brief Get the developer's logo.
     * @return Logo as string.
     */
    std::string getLogo() const;

    /**
     * @brief Prints a coffee message.
     *
     * This static method prints a coffee message to the standard output.
     */
    static void drink_coffee();

    /**
     * @brief Pure virtual function to solve a problem.
     *
     * Derived classes will implement this method.
     */
    virtual void solve_problem() const = 0;
};

/**
 * @brief Overloads the stream insertion operator for Developer.
 * @param os Output stream.
 * @param dev A Developer object.
 * @return Output stream.
 */
std::ostream& operator<<(std::ostream& os, const Developer& dev);

#endif // DEVELOPER_HPP