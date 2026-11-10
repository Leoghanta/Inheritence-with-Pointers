#pragma once
#include "BasePokemon.h"

class Charmander : public BasePokemon {

public:
	// Constructors and Destructors
	Charmander(const std::string& name, int level);
	~Charmander();

	BasePokemon* evolve(BasePokemon& p) const override;

	void quickAttack(BasePokemon* p) const override;
	void quickAttack(BasePokemon* p, int damage) const override;
	void specialAttack(BasePokemon* p) const override;
	void specialAttack(BasePokemon* p, int damage) const override;
};

