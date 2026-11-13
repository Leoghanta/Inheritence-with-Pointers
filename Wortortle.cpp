#include "Wortortle.h"
#include "Blastoise.h"
#include <iostream>

// Constructors and Destructors
Wortortle::Wortortle(const std::string& name, int level) : BasePokemon(name, "Water", level) {}
Wortortle::~Wortortle() {
	std::cout << getName() << " has been destroyed." << std::endl;
}

BasePokemon* Wortortle::evolve(BasePokemon& p) const {
	std::cout << "Wortortle evolves into Blastoise" << std::endl;
	//create new pokemon
	BasePokemon* b = new Blastoise("Blastoise", p.getLevel());
	//delete old pokemon
	delete& p;
	//return new pointer. 
	return b;
}

void Wortortle::quickAttack(BasePokemon* p) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses Water Gun against " << p->getName() << std::endl;
		p->takeDamage(calculateDamage(p));
	}
}

void Wortortle::quickAttack(BasePokemon* p, int damage) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses Water Gun against " << p->getName() << " causing " << damage << " damage!" << std::endl;
		p->takeDamage(damage);
	}
}

void Wortortle::specialAttack(BasePokemon* p) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses Aqua Jet against " << p->getName() << " causing " << damage << " damage!" << std::endl;
		p->takeDamage(calculateDamage(p));
	}
}

void Wortortle::specialAttack(BasePokemon* p, int damage) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses Aqua Jet against " << p->getName() << " causing " << damage << " damage!" << std::endl;
		p->takeDamage(damage);
	}
}
