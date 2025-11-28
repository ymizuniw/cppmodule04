#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
    private:
        Animal::type_;
    public:
        Cat(void);
        Cat(Cat const &other);
        Cat &operator=(Cat const &other);
        ~Cat(void);
        void makeSound(void) override;
        std::string getType(void);
};

#endif
