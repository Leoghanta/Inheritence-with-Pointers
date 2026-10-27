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

void Squirtle::quickAttack() const {
	std::cout << name << " uses Bubble!" << std::endl;
}

void Squirtle::quickAttack(int damage) const {
	std::cout << name << " uses Bubble causing " << damage << " damage!" << std::endl;
}
void Squirtle::specialAttack() const {
	std::cout << name << " uses Hydro Pump!" << std::endl;
}
void Squirtle::specialAttack(int damage) const {
	std::cout << name << " uses Hydro Pump causing " << damage << " damage!" << std::endl;
}
