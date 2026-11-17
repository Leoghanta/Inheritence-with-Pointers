#include <iostream>
#include "Squirtle.h"
#include "Wortortle.h"
#include "Blastoise.h"
#include "Charmander.h"
#include "Eevee.h"

int main()
{
    BasePokemon* p = new Squirtle("Squirtle", 8);
    BasePokemon* p2 = new Charmander("Charmander", 8);

    p->quickAttack(p2);
    p2->quickAttack(p);

    p->specialAttack(p2);
    p2->specialAttack(p);

    p->heal(10);

    p->specialAttack(p2);
    p2->specialAttack(p);


    delete p;
    delete p2;

    BasePokemon* pokemon = new Eevee("Eevee", 8);
    pokemon = pokemon->evolve(*pokemon);
    pokemon->displayInfo();
    delete pokemon;

    return 0;
}

