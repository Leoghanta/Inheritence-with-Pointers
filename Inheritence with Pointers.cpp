#include <iostream>
#include "Squirtle.h"
#include "Wortortle.h"
#include "Blastoise.h"

int main()
{
    BasePokemon *p = new Squirtle("Squirtle", 8);
    p->displayInfo();
    p->quickAttack();
    p->specialAttack(15);
    p->setLevel(16);

    //Evolve
    p = p->evolve(*p);
    p->displayInfo();
    p->quickAttack();
    p->specialAttack(24);
    p->setLevel(32);

    //Now evolve again.
    p = p->evolve(*p);
    p->displayInfo();
    p->quickAttack(18);
    p->specialAttack();

    return 0;
}

