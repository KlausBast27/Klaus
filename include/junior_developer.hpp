#ifndef JUNIOR_DEVELOPER_HPP
#define JUNIOR_DEVELOPER_HPP

#include "developer.hpp"

/**
 * @brief The JuniorDeveloper class.
 *
 * Inherits from Developer and represents a junior developer.
 */
class JuniorDeveloper : public Developer {
public:
    /**
     * @brief Construct a new JuniorDeveloper object.
     * @param name The developer's name.
     * @param alias The developer's alias.
     */
    JuniorDeveloper(const std::string& name, const std::string& alias);

    /**
     * @brief Implementation of solve_problem for a JuniorDeveloper.
     *
     * Prints the developer information and a specific junior message,
     * then calls the coffee routine.
     */
    virtual void solve_problem() const override;
};

#endif // JUNIOR_DEVELOPER_HPP