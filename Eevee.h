#pragma once
#include "BasePokemon.h"

class Eevee : public BasePokemon {

public:
	// Constructors and Destructors
	Eevee(const std::string& name, int level);
	~Eevee();

	BasePokemon* evolve(BasePokemon& p) const override;

	void quickAttack(BasePokemon* p) const override;
	void quickAttack(BasePokemon* p, int damage) const override;
	void specialAttack(BasePokemon* p) const override;
	void specialAttack(BasePokemon* p, int damage) const override;
};

