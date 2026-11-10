#pragma once
#include "BasePokemon.h"

class Blastoise : public BasePokemon {

public:
	// Constructors and Destructors
	Blastoise(const std::string& name, int level);
	~Blastoise();

	BasePokemon* evolve(BasePokemon& p) const override;

	void quickAttack(BasePokemon* p) const override;
	void quickAttack(BasePokemon* p, int damage) const override;
	void specialAttack(BasePokemon* p) const override;
	void specialAttack(BasePokemon* p, int damage) const override;
};
