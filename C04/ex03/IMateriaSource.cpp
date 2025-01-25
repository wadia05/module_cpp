#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
}

IMateriaSource::IMateriaSource(const IMateriaSource& other)
{
    (void)other; // Suppress unused parameter warning
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource& other)
{
    (void)other; // Suppress unused parameter warning
    return *this; // Add return statement
}

// Remove redundant destructor definition