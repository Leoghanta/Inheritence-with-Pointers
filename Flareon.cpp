#include "Eevee.h"
#include "Flareon.h"
#include <iostream>

// Constructors and Destructors
Flareon::Flareon(const std::string& name, int level) : BasePokemon(name, "Fire", level) {}

Flareon::~Flareon() {
	//std::cout << getName() << " has been destroyed." << std::endl;
}

BasePokemon* Flareon::evolve(BasePokemon& p) const {
	std::cout << "Vaporeon can not evolve" << std::endl;
	return &p;
}

void Flareon::quickAttack(BasePokemon* p) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses smokescreen against " << p->getName() << std::endl;
		p->takeDamage(calculateDamage(p));
	}
}

void Flareon::quickAttack(BasePokemon* p, int damage) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses smokescreen against " << p->getName() << " causing " << damage << " damage!" << std::endl;
		p->takeDamage(damage);
	}
}

void Flareon::specialAttack(BasePokemon* p) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses Ember against " << p->getName() << std::endl;
		p->takeDamage(calculateDamage(p));
	}
}

void Flareon::specialAttack(BasePokemon* p, int damage) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses Ember against " << p->getName() << " causing " << damage << " damage!" << std::endl;
		p->takeDamage(damage);
	}
}