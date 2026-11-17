#include "Eevee.h"
#include "Jolteon.h"
#include <iostream>

// Constructors and Destructors
Jolteon::Jolteon(const std::string& name, int level) : BasePokemon(name, "Electric", level) {}

Jolteon::~Jolteon() {
	//std::cout << getName() << " has been destroyed." << std::endl;
}

BasePokemon* Jolteon::evolve(BasePokemon& p) const {
	std::cout << "Jolteon can not evolve" << std::endl;
	return &p;
}

void Jolteon::quickAttack(BasePokemon* p) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses discharge against " << p->getName() << std::endl;
		p->takeDamage(calculateDamage(p));
	}
}

void Jolteon::quickAttack(BasePokemon* p, int damage) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses discharge against " << p->getName() << " causing " << damage << " damage!" << std::endl;
		p->takeDamage(damage);
	}
}

void Jolteon::specialAttack(BasePokemon* p) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses thunderbolt against " << p->getName() << std::endl;
		p->takeDamage(calculateDamage(p));
	}
}

void Jolteon::specialAttack(BasePokemon* p, int damage) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses thunderbolt against " << p->getName() << " causing " << damage << " damage!" << std::endl;
		p->takeDamage(damage);
	}
}
