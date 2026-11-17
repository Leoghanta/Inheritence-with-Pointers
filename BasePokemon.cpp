#include <iostream>
#include "BasePokemon.h"


//Constructor and Destructors
BasePokemon::BasePokemon(const std::string& name, const std::string& type, int level)
	: name(name), type(type), level(level), health(80), damage(15), armour(0), experience(0) {
	maxHealth = health;
}
				
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
	else {
		std::cout << "\t\t\t\t\t" << getName() << "(" << getHealth() << "/" << maxHealth << ")" << std::endl;
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
		//super effective
		if (p->getType() == "Fire" || p->getType() == "Ground" || p->getType() == "Rock") {
			return this->damage * 2;
		}
		//not very effective
		if (p->getType() == "Water" || p->getType() == "Grass" || p->getType() == "Dragon") {
			return this->damage / 2;
		}
	}

	if (this->getType() == "Fire") {
		//super effective
		if (p->getType() == "Grass" || p->getType() == "Ice" || p->getType() == "Bug" || p->getType() == "Steel") {
			return this->damage * 2;
		}
		//not very effective
		if (p->getType() == "Fire" || p->getType() == "Water" || p->getType() == "Rock" || p->getType() == "Dragon") {
			return this->damage / 2;
		}
	}

	if (this->getType() == "Grass") {
		//super effective
		if (p->getType() == "Grouns" || p->getType() == "Water" || p->getType() == "Rock") {
			return this->damage * 2;
		}

		if (p->getType() == "Fire" || p->getType() == "Grass" || p->getType() == "Poison" || p->getType() == "Flying" || 
			p->getType() == "Bug" || p->getType() == "Dragon" || p->getType() == "Steel") {
			return this->damage / 2;
		}
	}

	if (this->getType() == "Electric") {
		//super effective
		if (p->getType() == "Water" || p->getType() == "Flying") {
			return this->damage * 2;
		}
		// not very effective
		if (p->getType() == "Electric" || p->getType() == "Grass" || p->getType() == "Dragon") {
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

void BasePokemon::heal(int amount) {
	this->health = getHealth() + amount;
	if (health >= maxHealth) {
		health = maxHealth;
		std::cout << getName() << " is fully healed!" << std::endl;
	}
	else {
		std::cout << getName() << " used a potion to heal." << std::endl;
	}
	
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


