#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    type_="Dog";
    std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(Dog const &other) : Animal()
{
    if (this!=&other)
    {
        type_="Dog";
        Animal::operator=(other);
    }
    std::cout << "Dog copy-constructor called." << std::endl;
}

Dog const &Dog::operator=(Dog const &other)
{
    if (this!=&other)
        Animal::operator=(other);
    return (*this);
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "bawow" << std::endl;
}

std::string Dog::getType(void) const
{
    return (type_);
}
