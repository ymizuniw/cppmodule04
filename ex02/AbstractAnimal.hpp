#ifndef AbstractAnimal_HPP
#define AbstractAnimal_HPP

#include <iostream>

class AbstractAnimal
{
    protected:
        std::string type_;
    public:
        AbstractAnimal(void);
        AbstractAnimal(AbstractAnimal const &other);
        AbstractAnimal &operator=(AbstractAnimal const &other);
        virtual ~AbstractAnimal(void);
        virtual void makeSound(void) const = 0;
        std::string getType(void) const;
};

#endif
