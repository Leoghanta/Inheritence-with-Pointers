#include <iostream>
#include "BasePokemon.h"


//Constructor and Destructors
BasePokemon::BasePokemon(const std::string& name, const std::string& type, int level)
	: name(name), type(type), level(level) {}
				
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

//Attacks
void BasePokemon::quickAttack() const {
	std::cout << name << " uses Quick Attack" << std::endl;
}
void BasePokemon::quickAttack(int damage) const {
	std::cout << name << " uses Quick Attack causing " << damage << " damage!" << std::endl;
}
void BasePokemon::specialAttack() const {
	std::cout << name << " uses Special Attack" << std::endl;
}
void BasePokemon::specialAttack(int damage) const {
	std::cout << name << " uses Special Attack causing " << damage << " damage!" << std::endl;
}