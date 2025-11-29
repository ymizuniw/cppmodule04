#include "MateriaSource.hpp"
#include "print_utils.hpp"

MateriaSource::MateriaSource(void)
{
    for (size_t i=0;i<4;i++)
        materia_src_[i] = nullptr;
    print_msg("MateriaSource constructor called.");
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
    for (size_t i=0;i<4;i++)
        materia_src_[i]=other.materia_src_[i];
    print_msg("MateriaSource constructor called.");
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
    if (this!=&other)
    {
        for (size_t i=0;i<4;i++)
            materia_src_[i]=other.materia_src_[i];
    }
    return (*this);
}

MateriaSource::~MateriaSource(void)
{
    for (size_t i=0;i<4;i++)
    {
        if (materia_src_[i]!=nullptr)
            delete (materia_src_[i]);
    }
    print_msg("MateriaSource destructor called.");
}

void MateriaSource::learnMateria(AMateria *materia)
{
    size_t i=0;
    for (;i<4;i++)
    {
        if (materia_src_[i]==nullptr)
        {
            materia_src_[i]=materia->clone();
            break;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for(size_t i=0;i<4;i++)
    {
        if (materia_src_[i]->getType()==type)
        {
            AMateria *cp_materia = materia_src_[i]->clone();
            return (cp_materia);
        }
    }
    return (0);
}
