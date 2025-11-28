#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include <iomanip>

class Dog : virtual Animal
{
    public:
        Dog(void);
        Dog(Dog const &other);
        Dog const &operator=(Dog const &other);
        ~Dog(void);
        void makeSound(void) const;
        std::string getType(void) const override;
};

#endif
