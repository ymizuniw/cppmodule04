#ifndef CAT_HPP
#define CAT_HPP

#include "AbstractAnimal.hpp"
#include "Brain.hpp"

class Cat: public AbstractAnimal
{
    private:
        Brain *brain_;
    public:
        Cat(void);
        Cat(Cat const &other);
        Cat &operator=(Cat const &other);
        ~Cat(void);
        virtual void makeSound(void) const;
};

#endif
