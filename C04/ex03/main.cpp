#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp_1;
    AMateria* tmp_2;
    tmp_1 = src->createMateria("ice");
    me->equip(tmp_1);
    tmp_2 = src->createMateria("cure");
    me->equip(tmp_2);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    me->unequip(0);
    delete tmp_1;
    me->use(0, *bob);

    tmp_1 = src->createMateria("ice");
    me->equip(tmp_1);
    me->unequip(1);
    delete tmp_2;
    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;

    return 0;
}
