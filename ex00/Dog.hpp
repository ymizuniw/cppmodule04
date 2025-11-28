#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include <iomanip>

class Dog : virtual Animal
{
    private:
        Animal::type_;
    public:
        Dog(void);
        Dog(Dog const &other);
        Dog const &operator=(Dog const &other);
        ~Dog(void);
        void makeSound(void) override;
};

#endif
