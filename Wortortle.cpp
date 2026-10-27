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

void Wortortle::quickAttack() const {
	std::cout << name << " uses Water Gun!" << std::endl;
}

void Wortortle::quickAttack(int damage) const {
	std::cout << name << " uses Water Gun causing " << damage << " damage!" << std::endl;
}
void Wortortle::specialAttack() const {
	std::cout << name << " uses Aqua Jet!" << std::endl;
}
void Wortortle::specialAttack(int damage) const {
	std::cout << name << " uses Aqua Jet causing " << damage << " damage!" << std::endl;
}
