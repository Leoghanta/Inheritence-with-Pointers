#include "Charmander.h"
#include <iostream>

// Constructors and Destructors
Charmander::Charmander(const std::string& name, int level) : BasePokemon(name, "Fire", level) {}

Charmander::~Charmander() {
	//std::cout << getName() << " has been destroyed." << std::endl;
}

BasePokemon* Charmander::evolve(BasePokemon& p) const {
	std::cout << "Charmander does not eveolve yet" << std::endl;
	return &p;
}

void Charmander::quickAttack(BasePokemon* p) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses Ember against " << p->getName() << std::endl;
		p->takeDamage(calculateDamage(p));
	}
}

void Charmander::quickAttack(BasePokemon* p, int damage) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses Ember against " << p->getName() << " causing " << damage << " damage!" << std::endl;
		p->takeDamage(damage);
	}
}

void Charmander::specialAttack(BasePokemon* p) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses Flamethrower against " << p->getName() << std::endl;
		p->takeDamage(calculateDamage(p));
	}
}

void Charmander::specialAttack(BasePokemon* p, int damage) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses Flamethrower against " << p->getName() << " causing " << damage << " damage!" << std::endl;
		p->takeDamage(damage);
	}
}
