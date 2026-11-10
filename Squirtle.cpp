#include "Squirtle.h"
#include "Wortortle.h"
#include <iostream>

// Constructors and Destructors
Squirtle::Squirtle(const std::string& name, int level) : BasePokemon(name, "Water", level) {}	

Squirtle::~Squirtle() {
	//std::cout << getName() << " has been destroyed." << std::endl;
}

BasePokemon* Squirtle::evolve(BasePokemon &p) const {
	std::cout << "Squirtle evolves into Wartortle" << std::endl;
	//create new pokemon
	BasePokemon *w = new Wortortle("Wortortle", p.getLevel());
	//delete old pokemon
	delete &p;
	//return new pointer. 
	return w;
}

void Squirtle::quickAttack(BasePokemon* p) const {
	if (p->getHealth() <= 0) {
		std::cout << getName() << " beats the corpse of " << p->getName() << std::endl;
		return;
	}
	std::cout << getName() << " uses Bubble against " << p->getName() << std::endl;
}

void Squirtle::quickAttack(BasePokemon* p, int damage) const {
	if (p->getHealth() <= 0) {
		std::cout << getName() << " beats the corpse of " << p->getName() << std::endl;
		return;
	}
	std::cout << getName() << " uses Bubble against " << p->getName() << " causing " << damage << " damage!" << std::endl;
}

void Squirtle::specialAttack(BasePokemon* p) const {
	if (p->getHealth() <= 0) {
		std::cout << getName() << " beats the corpse of " << p->getName() << std::endl;
		return;
	}
	std::cout << getName() << " uses Hydro Pump against " << p->getName() << std::endl;
}

void Squirtle::specialAttack(BasePokemon* p, int damage) const {
	if (p->getHealth() <= 0) {
		std::cout << getName() << " beats the corpse of " << p->getName() << std::endl;
		return;
	}
	std::cout << getName() << " uses Hydro Pump against " << p->getName() << " causing " << damage << " damage!" << std::endl;
}
