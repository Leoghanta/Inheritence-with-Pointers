#pragma once
#include <string>

class BasePokemon
{
protected:
	std::string name;
	std::string type;
	int experience;
	int level;
	int health;
	int maxHealth;
	int damage;
	int armour;

public:
	//Constructor and Destructors
	BasePokemon(const std::string& name, const std::string& type, int level);
	~BasePokemon();

	//Getters and Setters
	std::string getName() const;
	std::string getType() const;
	int getLevel() const;
	void setName(const std::string& name);
	void setType(const std::string& type);
	void setLevel(int level);
	void takeDamage(int damage);
	void heal(int amount);
	int getHealth() const;

	//Other Methods
	void displayInfo() const;
	virtual BasePokemon *evolve(BasePokemon &p) const;
	bool canAttack(BasePokemon* p) const;
	int calculateDamage(BasePokemon* p) const;


	//attacks
	virtual void quickAttack(BasePokemon* p) const;
	virtual void quickAttack(BasePokemon* p, int damage) const;
	virtual void specialAttack(BasePokemon* p) const;
	virtual void specialAttack(BasePokemon* p, int damage) const;

};

