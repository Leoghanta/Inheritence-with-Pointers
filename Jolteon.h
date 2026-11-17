#pragma once
#include "BasePokemon.h"

class Jolteon : public BasePokemon {

public:
	// Constructors and Destructors
	Jolteon(const std::string& name, int level);
	~Jolteon();

	BasePokemon* evolve(BasePokemon& p) const override;

	void quickAttack(BasePokemon* p) const override;
	void quickAttack(BasePokemon* p, int damage) const override;
	void specialAttack(BasePokemon* p) const override;
	void specialAttack(BasePokemon* p, int damage) const override;
};

