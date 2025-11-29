#ifndef DOG_HPP
#define DOG_HPP

#include "AbstractAnimal.hpp"
#include "Brain.hpp"

class Dog : public AbstractAnimal
{
    private:
        Brain *brain_;
    public:
        Dog(void);
        Dog(Dog const &other);
        Dog const &operator=(Dog const &other);
        ~Dog(void);
        virtual void makeSound(void) const;
};

#endif
