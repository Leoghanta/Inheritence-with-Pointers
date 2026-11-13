#include "Blastoise.h"
#include <iostream>

// Constructors and Destructors
Blastoise::Blastoise(const std::string& name, int level) : BasePokemon(name, "Water", level) {}
Blastoise::~Blastoise() {
	std::cout << getName() << " has been destroyed." << std::endl;
}

BasePokemon* Blastoise::evolve(BasePokemon& p) const {
	//Blastoise can not evolve.
	return &p;
}

void Blastoise::quickAttack(BasePokemon* p) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses Skull Bash against " << p->getName() << std::endl;
		p->takeDamage(calculateDamage(p));
	}
}

void Blastoise::quickAttack(BasePokemon* p, int damage) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses Skull Bash against " << p->getName() << " causing " << damage << " damage!" << std::endl;
		p->takeDamage(damage);
	}
}

void Blastoise::specialAttack(BasePokemon* p) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses Hydro Cannon against " << p->getName() << std::endl;
		p->takeDamage(calculateDamage(p));
	}
}

void Blastoise::specialAttack(BasePokemon* p, int damage) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses Hydro Cannon against " << p->getName() << " causing " << damage << " damage!" << std::endl;
		p->takeDamage(damage);
	}
}

