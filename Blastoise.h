#pragma once
#include "BasePokemon.h"

class Blastoise : public BasePokemon {

public:
	// Constructors and Destructors
	Blastoise(const std::string& name, int level);
	~Blastoise();

	BasePokemon* evolve(BasePokemon& p) const override;

	void quickAttack() const override;
	void quickAttack(int damage) const override;
	void specialAttack() const override;
	void specialAttack(int damage) const override;
};
