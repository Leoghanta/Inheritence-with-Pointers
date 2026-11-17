#include "Eevee.h"
#include "Flareon.h"
#include "Jolteon.h"
#include "Vaporeon.h"
#include <iostream>

// Constructors and Destructors
Eevee::Eevee(const std::string& name, int level) : BasePokemon(name, "Normal", level) {}

Eevee::~Eevee() {
	//std::cout << getName() << " has been destroyed." << std::endl;
}

BasePokemon* Eevee::evolve(BasePokemon& p) const {
	//create new pokemon pointer
	BasePokemon* eeveelution = nullptr;
	srand(time(0));
	switch (rand() % 3) {
	case 0:
		//New Flareon
		eeveelution = new Flareon("Flareon", p.getLevel());
		break;
	case 1:
		eeveelution = new Vaporeon("Vaporeon", p.getLevel());
		break;
	case 2:
		eeveelution = new Jolteon("Jolteon", p.getLevel());
	}

	std::cout << this->getName() << " evolves into " << eeveelution->getName() << std::endl;
	delete& p;
	//return new pointer. 
	return eeveelution;
}

void Eevee::quickAttack(BasePokemon* p) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses growl against " << p->getName() << std::endl;
		p->takeDamage(calculateDamage(p));
	}
}

void Eevee::quickAttack(BasePokemon* p, int damage) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses growl against " << p->getName() << " causing " << damage << " damage!" << std::endl;
		p->takeDamage(damage);
	}
}

void Eevee::specialAttack(BasePokemon* p) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses Take Down against " << p->getName() << std::endl;
		p->takeDamage(calculateDamage(p));
	}
}

void Eevee::specialAttack(BasePokemon* p, int damage) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses Take Down against " << p->getName() << " causing " << damage << " damage!" << std::endl;
		p->takeDamage(damage);
	}
}
