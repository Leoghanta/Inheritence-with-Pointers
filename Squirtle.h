#pragma once
#include "BasePokemon.h"

class Squirtle : public BasePokemon {

public:
	// Constructors and Destructors
	Squirtle(const std::string& name, int level);
	~Squirtle();

	BasePokemon* evolve(BasePokemon& p) const override;

	void quickAttack() const override;
	void quickAttack(int damage) const override;
	void specialAttack() const override;
	void specialAttack(int damage) const override;
};

