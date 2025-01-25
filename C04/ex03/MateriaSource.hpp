#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
class MateriaSource :public IMateriaSource
{
    private:
        AMateria* _materias[4];
    public:
    MateriaSource();
    MateriaSource(const MateriaSource& other);
    MateriaSource&  operator=(const MateriaSource& other);

    virtual ~MateriaSource();
    virtual void learnMateria(AMateria*) ;
    virtual AMateria* createMateria(std::string const & type) ;
};

#endif