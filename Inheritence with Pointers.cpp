#include <iostream>
#include "Squirtle.h"
#include "Wortortle.h"
#include "Blastoise.h"
#include "Charmander.h"

int main()
{
    BasePokemon* p = new Squirtle("Squirtle", 8);
    BasePokemon* p2 = new Charmander("Charmander", 8);

    p->quickAttack(p2);
    p2->quickAttack(p);

    p->specialAttack(p2);
    p2->specialAttack(p);


    delete p;
    delete p2;

    return 0;
}

