#pragma once
#include "BasePokemon.h"

class Wortortle : public BasePokemon {

public:
	// Constructors and Destructors
	Wortortle(const std::string& name, int level);
	~Wortortle();

	BasePokemon* evolve(BasePokemon& p) const override;

	void quickAttack() const override;
	void quickAttack(int damage) const override;
	void specialAttack() const override;
	void specialAttack(int damage) const override;
};
