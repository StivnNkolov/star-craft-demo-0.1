#ifndef DEMO_GAME_H
#define DEMO_GAME_H

#include <memory>
#include <vector>
#include "abstract_classes.h"
#include "protoss.h"
#include "terran.h"

/// This is still not working. Use the tests in the main function.

class Game{
public:
    Game() {
        m_races.emplace_back(new Terran);
        m_races.emplace_back(new Protoss);
    }

    int playGame(std::vector<std::string> &compositions) {
        printMenu();


        return 0;
    }



private:
    std::vector<std::unique_ptr<Race>> m_races;
private:
    void printMenu() {

    }

    void printKillMsg() {

    }

    void printTurnMsg() {

    }

    void generateRacesFleets(std::vector<std::string> &compositions) {

    }

//    void takeRacesCompositionFromUserInput() {
//        std::string currentComposition
//    }



};

#endif //DEMO_GAME_H
