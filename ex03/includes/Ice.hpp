#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

// class AMateria
// {
//     protected:
//         std::string type_;
//     public:
//         AMateria(std::string const &type);
//         std::string const &getType() const;
//         virtual AMateria *clone() const = 0;
//         virtual void use(ICharacter &target);
// };

class Ice : public AMateria
{
    public:
        Ice(void);
        Ice(Ice const &other);
        Ice &operator=(Ice const &other);
        ~Ice(void);
        AMateria *clone(void) const;
        void use(ICharacter &target);
};

#endif
