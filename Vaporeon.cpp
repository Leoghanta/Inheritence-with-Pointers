#include "Eevee.h"
#include "Vaporeon.h"
#include <iostream>

// Constructors and Destructors
Vaporeon::Vaporeon(const std::string& name, int level) : BasePokemon(name, "Water", level) {}

Vaporeon::~Vaporeon() {
	//std::cout << getName() << " has been destroyed." << std::endl;
}

BasePokemon* Vaporeon::evolve(BasePokemon& p) const {
	std::cout << "Vaporeon can not evolve" << std::endl;
	return &p;
}

void Vaporeon::quickAttack(BasePokemon* p) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses bubble beam against " << p->getName() << std::endl;
		p->takeDamage(calculateDamage(p));
	}
}

void Vaporeon::quickAttack(BasePokemon* p, int damage) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses bubble beam against " << p->getName() << " causing " << damage << " damage!" << std::endl;
		p->takeDamage(damage);
	}
}

void Vaporeon::specialAttack(BasePokemon* p) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses scald against " << p->getName() << std::endl;
		p->takeDamage(calculateDamage(p));
	}
}

void Vaporeon::specialAttack(BasePokemon* p, int damage) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses scald against " << p->getName() << " causing " << damage << " damage!" << std::endl;
		p->takeDamage(damage);
	}
}