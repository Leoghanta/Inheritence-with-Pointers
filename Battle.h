#pragma once
#include "BasePokemon.h"

class Battle {
private:
    int getChoice(int min, int max) const;
    BasePokemon* choosePokemon() const;
    void displayStatus(BasePokemon* player, BasePokemon* opponent) const;
    void opponentTurn(BasePokemon* opponent, BasePokemon* player) const;
    void runBattle() const;

public:
    void start() const;
};