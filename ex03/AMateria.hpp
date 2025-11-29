#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string type_;
    public:
        AMateria(void);
        AMateria(AMateria const &materia);
        AMateria &operator=(AMateria const &materia);
        ~AMateria(void);
        AMateria(std::string const &type);
        std::string const &getType(void) const;
        virtual AMateria *clone(void) const = 0;
        virtual void use(ICharacter &target);
};

#endif
