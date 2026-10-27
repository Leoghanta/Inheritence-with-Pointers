#pragma once
#include <string>

class BasePokemon
{
protected:
	std::string name;
	std::string type;
	int level;

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

	//Other Methods
	void displayInfo() const;
	virtual BasePokemon *evolve(BasePokemon &p) const;

	//attacks
	virtual void quickAttack() const;
	virtual void quickAttack(int damage) const;
	virtual void specialAttack() const;
	virtual void specialAttack(int damage) const;


};

