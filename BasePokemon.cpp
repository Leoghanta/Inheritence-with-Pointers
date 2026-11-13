#include <iostream>
#include "BasePokemon.h"


//Constructor and Destructors
BasePokemon::BasePokemon(const std::string& name, const std::string& type, int level)
	: name(name), type(type), level(level), health(10), damage(15), armour(10) {}
				
BasePokemon::~BasePokemon() {
	//std::cout << "BasePokemon " << name << " destroyed." << std::endl;
}

//Getters and Setters
std::string BasePokemon::getName() const {
	return name;
}

std::string BasePokemon::getType() const {
	return type;
}

int BasePokemon::getLevel() const {
	return level;
}

void BasePokemon::setName(const std::string& name) {
	this->name = name;
}

void BasePokemon::setType(const std::string& type) {
	this->type = type;
}

void BasePokemon::setLevel(int level) {
	this->level = level;
}

void BasePokemon::takeDamage(int damage) {
	this->health = health - damage;
	if (health < 0) {
		health = 0;
		std::cout << "You killed " << name << " You bastards!" << std::endl;
	}
}

int BasePokemon::getHealth() const {
	return health;
}

//Other Methods
void BasePokemon::displayInfo() const {
	std::cout << "Name: " << name << std::endl;
	std::cout << "Type: " << type << std::endl;
	std::cout << "Level: " << level << std::endl;
}

BasePokemon *BasePokemon::evolve(BasePokemon &p) const {
	//base pokemon can not evolve.
	return &p;
}

int BasePokemon::calculateDamage(BasePokemon* p) const {
	if (this->getType() == p->getType()) {
		return this->damage;
	}
	if (this->getType() == "Water") {
		if (p->getType() == "Fire") {
			return this->damage / 2;
		}
		if (p->getType() == "Grass") {
			return this->damage * 2;
		}
	}

	if (this->getType() == "Fire") {
		if (p->getType() == "Water") {
			return this->damage * 2;
		}
		if (p->getType() == "Grass") {
			return this->damage / 2;
		}
	}

	if (this->getType() == "Grass") {
		if (p->getType() == "Water") {
			return this->damage * 2;
		}
		if (p->getType() == "Fire") {
			return this->damage / 2;
		}
	}

	return this->damage;

}

bool BasePokemon::canAttack(BasePokemon* p) const {
	if (getHealth() <= 0) {
		std::cout << name << " is dead and can't attack" << std::endl;
		return false;
	}
	if (p->getHealth() <= 0) {
		std::cout << getName() << " beats the corpse of " << p->getName() << std::endl;
		return false;
	}
	return true;
}

//Attacks
void BasePokemon::quickAttack(BasePokemon* p) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses Quick Attack against " << p->getName() << std::endl;
		p->takeDamage(calculateDamage(p));
	}
}

void BasePokemon::quickAttack(BasePokemon* p, int damage) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses Quick Attack against " << p->getName() << " causing " << damage << " damage!" << std::endl;
		p->takeDamage(calculateDamage(p));
	}
}

void BasePokemon::specialAttack(BasePokemon* p) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses Special Attack against " << p->getName() << std::endl;
		p->takeDamage(calculateDamage(p));
	}
}

void BasePokemon::specialAttack(BasePokemon* p, int damage) const {
	if (canAttack(p)) {
		std::cout << getName() << " uses Special Attack against " << p->getName() << " causing " << damage << " damage!" << std::endl;
		p->takeDamage(calculateDamage(p));
	}
}


