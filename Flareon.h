#pragma once
#include "BasePokemon.h"

class Flareon : public BasePokemon {

public:
	// Constructors and Destructors
	Flareon(const std::string& name, int level);
	~Flareon();

	BasePokemon* evolve(BasePokemon& p) const override;

	void quickAttack(BasePokemon* p) const override;
	void quickAttack(BasePokemon* p, int damage) const override;
	void specialAttack(BasePokemon* p) const override;
	void specialAttack(BasePokemon* p, int damage) const override;
};

