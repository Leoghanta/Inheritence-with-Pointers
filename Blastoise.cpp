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

void Blastoise::quickAttack() const {
	std::cout << name << " uses Skull Bash!" << std::endl;
}

void Blastoise::quickAttack(int damage) const {
	std::cout << name << " uses Skull Bash causing " << damage << " damage!" << std::endl;
}
void Blastoise::specialAttack() const {
	std::cout << name << " uses Hydro Cannon!" << std::endl;
}
void Blastoise::specialAttack(int damage) const {
	std::cout << name << " uses Hydro Cannon causing " << damage << " damage!" << std::endl;
}
