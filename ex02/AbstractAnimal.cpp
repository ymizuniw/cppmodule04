#include "AbstractAnimal.hpp"

AbstractAnimal::AbstractAnimal(void)
{
    type_="AbstractAnimal";
    std::cout << "AbstractAnimal constructed." << std::endl;
}

AbstractAnimal::AbstractAnimal(AbstractAnimal const &other) : type_(other.type_)
{
    std::cout << "AbstractAnimal copy-constructor called." << std::endl;
}

AbstractAnimal &AbstractAnimal::operator=(AbstractAnimal const &other)
{
    if (this!=&other)
        type_=other.type_;
    return (*this);
}

AbstractAnimal::~AbstractAnimal(void)
{
    std::cout << "AbstractAnimal destructor called." << std::endl;
}

void AbstractAnimal::makeSound(void) const
{
    std::cout << "AbstractAnimal AbstractAnimal!" << std::endl;
}

std::string AbstractAnimal::getType(void) const
{
    return (type_);
}
