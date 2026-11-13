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
	if (canAttack(p)) {
		std::cout << getName() << " uses Bubble against " << p->getName() << std::endl;
		p->takeDamage(calculateDamage(p));
	}
}

void Squirtle::quickAttack(BasePokemon* p, int damage) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses Bubble against " << p->getName() << " causing " << damage << " damage!" << std::endl;
		p->takeDamage(damage);
	}
}

void Squirtle::specialAttack(BasePokemon* p) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses Hydro Pump against " << p->getName() << std::endl;
		p->takeDamage(calculateDamage(p));
	}
}

void Squirtle::specialAttack(BasePokemon* p, int damage) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses Hydro Pump against " << p->getName() << " causing " << damage << " damage!" << std::endl;
		p->takeDamage(damage);
	}
}
