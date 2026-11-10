#pragma once
#include "BasePokemon.h"

class Squirtle : public BasePokemon {

public:
	// Constructors and Destructors
	Squirtle(const std::string& name, int level);
	~Squirtle();

	BasePokemon* evolve(BasePokemon& p) const override;

	void quickAttack(BasePokemon* p) const override;
	void quickAttack(BasePokemon* p, int damage) const override;
	void specialAttack(BasePokemon* p) const override;
	void specialAttack(BasePokemon* p, int damage) const override;
};

