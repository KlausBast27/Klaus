#ifndef SENIOR_DEVELOPER_HPP
#define SENIOR_DEVELOPER_HPP

#include "developer.hpp"

/**
 * @brief The SeniorDeveloper class.
 *
 * Inherits from Developer and represents a senior developer.
 */
class SeniorDeveloper : public Developer {
public:
    /**
     * @brief Construct a new SeniorDeveloper object.
     * @param name The developer's name.
     * @param alias The developer's alias.
     */
    SeniorDeveloper(const std::string& name, const std::string& alias);

    /**
     * @brief Implementation of solve_problem for a SeniorDeveloper.
     *
     * Prints the developer details and a specific senior message,
     * then calls the coffee routine.
     */
    virtual void solve_problem() const override;
};

#endif // SENIOR_DEVELOPER_HPP