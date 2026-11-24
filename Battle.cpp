#include "Battle.h"
#include "Squirtle.h"
#include "Wortortle.h"
#include "Blastoise.h"
#include "Charmander.h"
#include "Eevee.h"
#include "Flareon.h"
#include "Vaporeon.h"
#include "Jolteon.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <sstream>


int Battle::getChoice(int min, int max) const {
    std::string line;
    int choice;

    //using std::stoi [string to integer] to move string to integer.
    //https://www.geeksforgeeks.org/cpp/stdstoi-function-in-cpp/ 
    //Exception handling for safety. 
    while (true) {
        std::cin >> line;
        try {
            choice = std::stoi(line);
            if (choice >= min && choice <= max) {
                return choice;
            }
            else {
                std::cout << "Value out of range between " << min << " and " << max << "! Try again: ";
            }
        }
        catch (const std::invalid_argument&) {
            std::cout << "Invalid Choice. Try again: ";
        }
    }

    return -1; //need to return something here.
}


BasePokemon* Battle::choosePokemon() const {
    std::cout << "1. Squirtle\n2. Wortortle\n3. Blastoise\n"
        << "4. Charmander\n5. Eevee\n6. Flareon\n"
        << "7. Vaporeon\n8. Jolteon\nChoose: ";
    switch (getChoice(1, 8)) {
    case 1: return new Squirtle("Squirtle", 8);
    case 2: return new Wortortle("Wortortle", 8);
    case 3: return new Blastoise("Blastoise", 8);
    case 4: return new Charmander("Charmander", 8);
    case 5: return new Eevee("Eevee", 8);
    case 6: return new Flareon("Flareon", 8);
    case 7: return new Vaporeon("Vaporeon", 8);
    case 8: return new Jolteon("Jolteon", 8);
    default: return nullptr;  //Safety net. it shouldn't get here.. but you know..
    }
}



void Battle::displayStatus(BasePokemon* player, BasePokemon* opponent) const {
    std::cout << "\n-----------------------------\n"
        << player->getName() << " (You): " << player->getHealth() << " HP\n"
        << opponent->getName() << " (Opponent): " << opponent->getHealth() << " HP\n"
        << "-----------------------------\n";
}


void Battle::opponentTurn(BasePokemon* opponent, BasePokemon* player) const {
    std::cout << "\nOpponent's turn!\n";
    if (std::rand() % 2 == 0)
        opponent->quickAttack(player);
    else
        opponent->specialAttack(player);
}


void Battle::runBattle() const {
    std::cout << "\nChoose your Pokemon:\n";
    BasePokemon* player = choosePokemon();
    if (!player) return;
    std::cout << "\nChoose your opponent:\n";
    BasePokemon* opponent = choosePokemon();
    if (!opponent) { 
        delete player; 
        return; 
    }
    int potions = 3;
    std::cout << "\n" << player->getName() << " VS " << opponent->getName() << "!\n";
    while (player->getHealth() > 0 && opponent->getHealth() > 0) {
        displayStatus(player, opponent);
        std::cout << "1. Quick attack\n2. Special attack\n3. Heal ("
            << potions << " potions left)\nChoose: ";
        int choice = getChoice(1, 3);
        if (choice == -1) break;
        switch (choice) {
        case 1: player->quickAttack(opponent); break;
        case 2: player->specialAttack(opponent); break;
        case 3:
            if (potions == 0) {
                std::cout << "No potions left!\n";
                continue;
            }
            player->heal(20);
            --potions;
            break;
        }
        if (opponent->getHealth() <= 0) break;
        opponentTurn(opponent, player);
    }


    displayStatus(player, opponent);
    if (opponent->getHealth() <= 0)
        std::cout << player->getName() << " wins! You win!\n";
    else if (player->getHealth() <= 0)
        std::cout << opponent->getName() << " wins! You lose!\n";
    else
        std::cout << "Battle cancelled.\n";
    delete player;
    delete opponent;
}


void Battle::start() const {
    std::srand(std::time(0)); //seed my random
    do {
        runBattle();
        if (!std::cin) return;
        std::cout << "\nBattle again?\n1. Yes\n2. No\nChoose: ";
    } while (getChoice(1, 2) == 1);
}
