#pragma once
#include "BasePokemon.h"

class Wortortle : public BasePokemon {

public:
	// Constructors and Destructors
	Wortortle(const std::string& name, int level);
	~Wortortle();

	BasePokemon* evolve(BasePokemon& p) const override;

	void quickAttack(BasePokemon* p) const override;
	void quickAttack(BasePokemon* p, int damage) const override;
	void specialAttack(BasePokemon* p) const override;
	void specialAttack(BasePokemon* p, int damage) const override;
};
