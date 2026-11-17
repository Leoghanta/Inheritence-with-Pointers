#pragma once
#include "BasePokemon.h"

class Vaporeon : public BasePokemon {

public:
	// Constructors and Destructors
	Vaporeon(const std::string& name, int level);
	~Vaporeon();

	BasePokemon* evolve(BasePokemon& p) const override;

	void quickAttack(BasePokemon* p) const override;
	void quickAttack(BasePokemon* p, int damage) const override;
	void specialAttack(BasePokemon* p) const override;
	void specialAttack(BasePokemon* p, int damage) const override;
};

