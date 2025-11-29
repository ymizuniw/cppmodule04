#include "AMateria.hpp"
#include "print_utils.hpp"

AMateria::AMateria(std::string const &type): type_(type)
{
    print_msg("AMateria constructor called.");
}

AMateria::AMateria(AMateria const &other) : type_(other.type_)
{
    print_msg("AMateria copy-construcotr called.");
}

AMateria &AMateria::operator=(AMateria const &other)
{
    if (this!=&other)
    {
        type_=other.type_;
    }
    return (*this);
}

std::string const &AMateria::getType(void) const
{
    return (type_);
}
