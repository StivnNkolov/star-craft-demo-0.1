#include <iostream>
#include "./includes/viking.h"
#include "./includes/battle_cruiser.h"
#include "./includes/phoenix.h"
#include "./includes/carrier.h"
#include "./includes/terran.h"
#include "./includes/protoss.h"
#include "./includes/Defines.h"
#include <memory>
#include <vector>

void GenerateVectorTest001(std::vector<std::unique_ptr<Ship>> &terran, std::vector<std::unique_ptr<Ship>> &protoss) {
    terran.emplace_back(new Viking());
    terran.emplace_back(new Viking());
    terran.emplace_back(new Viking());

    protoss.emplace_back(new Phoenix());
    protoss.emplace_back(new Phoenix());
    protoss.emplace_back(new Phoenix());
}

void GenerateVectorTest002(std::vector<std::unique_ptr<Ship>> &terran, std::vector<std::unique_ptr<Ship>> &protoss) {
    terran.emplace_back(new Viking("Viking", AirShipDefines::VIKING_HEALTH, AirShipDefines::VIKING_DAMAGE));
    terran.emplace_back(new Viking("Viking", AirShipDefines::VIKING_HEALTH, AirShipDefines::VIKING_DAMAGE));
    terran.emplace_back(new Viking("Viking", AirShipDefines::VIKING_HEALTH, AirShipDefines::VIKING_DAMAGE));
    terran.emplace_back(new Viking("Viking", AirShipDefines::VIKING_HEALTH, AirShipDefines::VIKING_DAMAGE));

    protoss.emplace_back(new Phoenix("Phoenix", AirShipDefines::PHOENIX_HEALTH, AirShipDefines::PHOENIX_DAMAGE,
                                     AirShipDefines::PHOENIX_SHIELD));

    protoss.emplace_back(new Phoenix("Phoenix", AirShipDefines::PHOENIX_HEALTH, AirShipDefines::PHOENIX_DAMAGE,
                                     AirShipDefines::PHOENIX_SHIELD));
    protoss.emplace_back(new Phoenix("Phoenix", AirShipDefines::PHOENIX_HEALTH, AirShipDefines::PHOENIX_DAMAGE,
                                     AirShipDefines::PHOENIX_SHIELD));
}

void GenerateVectorTest003(std::vector<std::unique_ptr<Ship>> &terran, std::vector<std::unique_ptr<Ship>> &protoss) {
    terran.emplace_back(new BattleCruiser());
    terran.emplace_back(new BattleCruiser());
    protoss.emplace_back(new Carrier());
    protoss.emplace_back(new Carrier());
}

void GenerateVectorTest004(std::vector<std::unique_ptr<Ship>> &terran, std::vector<std::unique_ptr<Ship>> &protoss) {
    terran.emplace_back(new BattleCruiser("Battlecruiser", AirShipDefines::BATTLE_CRUSER_HEALTH,
                                          AirShipDefines::BATTLE_BRUSER_DAMAGE));

    terran.emplace_back(new BattleCruiser("Battlecruiser", AirShipDefines::BATTLE_CRUSER_HEALTH,
                                          AirShipDefines::BATTLE_BRUSER_DAMAGE));

    protoss.emplace_back(new Carrier("Carrier", AirShipDefines::CARRIER_HEALTH, AirShipDefines::CARRIER_DAMAGE,
                                     AirShipDefines::CARRIER_SHIELD, 8));

    protoss.emplace_back(new Carrier("Carrier", AirShipDefines::CARRIER_HEALTH, AirShipDefines::CARRIER_DAMAGE,
                                     AirShipDefines::CARRIER_SHIELD, 8));
    protoss.emplace_back(new Carrier("Carrier", AirShipDefines::CARRIER_HEALTH, AirShipDefines::CARRIER_DAMAGE,
                                     AirShipDefines::CARRIER_SHIELD, 8));
}

void GenerateVectorTest005(std::vector<std::unique_ptr<Ship>> &terran, std::vector<std::unique_ptr<Ship>> &protoss) {
    terran.emplace_back(new BattleCruiser("Battlecruiser", AirShipDefines::BATTLE_CRUSER_HEALTH,
                                          AirShipDefines::BATTLE_BRUSER_DAMAGE));

    terran.emplace_back(new BattleCruiser("Battlecruiser", AirShipDefines::BATTLE_CRUSER_HEALTH,
                                          AirShipDefines::BATTLE_BRUSER_DAMAGE));

    protoss.emplace_back(new Phoenix("Phoenix", AirShipDefines::PHOENIX_HEALTH, AirShipDefines::PHOENIX_DAMAGE,
                                     AirShipDefines::PHOENIX_SHIELD));
    protoss.emplace_back(new Phoenix("Phoenix", AirShipDefines::PHOENIX_HEALTH, AirShipDefines::PHOENIX_DAMAGE,
                                     AirShipDefines::PHOENIX_SHIELD));
    protoss.emplace_back(new Phoenix("Phoenix", AirShipDefines::PHOENIX_HEALTH, AirShipDefines::PHOENIX_DAMAGE,
                                     AirShipDefines::PHOENIX_SHIELD));
    protoss.emplace_back(new Phoenix("Phoenix", AirShipDefines::PHOENIX_HEALTH, AirShipDefines::PHOENIX_DAMAGE,
                                     AirShipDefines::PHOENIX_SHIELD));
    protoss.emplace_back(new Phoenix("Phoenix", AirShipDefines::PHOENIX_HEALTH, AirShipDefines::PHOENIX_DAMAGE,
                                     AirShipDefines::PHOENIX_SHIELD));
    protoss.emplace_back(new Phoenix("Phoenix", AirShipDefines::PHOENIX_HEALTH, AirShipDefines::PHOENIX_DAMAGE,
                                     AirShipDefines::PHOENIX_SHIELD));

}

void GenerateVectorTest006(std::vector<std::unique_ptr<Ship>> &terran, std::vector<std::unique_ptr<Ship>> &protoss) {
    terran.emplace_back(new BattleCruiser("Battlecruiser", AirShipDefines::BATTLE_CRUSER_HEALTH,
                                          AirShipDefines::BATTLE_BRUSER_DAMAGE));

    terran.emplace_back(new BattleCruiser("Battlecruiser", AirShipDefines::BATTLE_CRUSER_HEALTH,
                                          AirShipDefines::BATTLE_BRUSER_DAMAGE));

    protoss.emplace_back(new Phoenix("Phoenix", AirShipDefines::PHOENIX_HEALTH, AirShipDefines::PHOENIX_DAMAGE,
                                     AirShipDefines::PHOENIX_SHIELD));
    protoss.emplace_back(new Phoenix("Phoenix", AirShipDefines::PHOENIX_HEALTH, AirShipDefines::PHOENIX_DAMAGE,
                                     AirShipDefines::PHOENIX_SHIELD));
    protoss.emplace_back(new Phoenix("Phoenix", AirShipDefines::PHOENIX_HEALTH, AirShipDefines::PHOENIX_DAMAGE,
                                     AirShipDefines::PHOENIX_SHIELD));
    protoss.emplace_back(new Phoenix("Phoenix", AirShipDefines::PHOENIX_HEALTH, AirShipDefines::PHOENIX_DAMAGE,
                                     AirShipDefines::PHOENIX_SHIELD));
    protoss.emplace_back(new Phoenix("Phoenix", AirShipDefines::PHOENIX_HEALTH, AirShipDefines::PHOENIX_DAMAGE,
                                     AirShipDefines::PHOENIX_SHIELD));
}

void GenerateVectorTest007(std::vector<std::unique_ptr<Ship>> &terran, std::vector<std::unique_ptr<Ship>> &protoss) {
    terran.emplace_back(new Viking("Viking", AirShipDefines::VIKING_HEALTH, AirShipDefines::VIKING_DAMAGE));
    terran.emplace_back(new Viking("Viking", AirShipDefines::VIKING_HEALTH, AirShipDefines::VIKING_DAMAGE));
    terran.emplace_back(new Viking("Viking", AirShipDefines::VIKING_HEALTH, AirShipDefines::VIKING_DAMAGE));
    terran.emplace_back(new Viking("Viking", AirShipDefines::VIKING_HEALTH, AirShipDefines::VIKING_DAMAGE));
    terran.emplace_back(new Viking("Viking", AirShipDefines::VIKING_HEALTH, AirShipDefines::VIKING_DAMAGE));
    terran.emplace_back(new Viking("Viking", AirShipDefines::VIKING_HEALTH, AirShipDefines::VIKING_DAMAGE));
    terran.emplace_back(new Viking("Viking", AirShipDefines::VIKING_HEALTH, AirShipDefines::VIKING_DAMAGE));
    terran.emplace_back(new Viking("Viking", AirShipDefines::VIKING_HEALTH, AirShipDefines::VIKING_DAMAGE));
    terran.emplace_back(new Viking("Viking", AirShipDefines::VIKING_HEALTH, AirShipDefines::VIKING_DAMAGE));


    protoss.emplace_back(new Carrier("Carrier", AirShipDefines::CARRIER_HEALTH, AirShipDefines::CARRIER_DAMAGE,
                                     AirShipDefines::CARRIER_SHIELD, 8));

    protoss.emplace_back(new Carrier("Carrier", AirShipDefines::CARRIER_HEALTH, AirShipDefines::CARRIER_DAMAGE,
                                     AirShipDefines::CARRIER_SHIELD, 8));
}

void GenerateVectorTest008(std::vector<std::unique_ptr<Ship>> &terran, std::vector<std::unique_ptr<Ship>> &protoss) {
    terran.emplace_back(new Viking("Viking", AirShipDefines::VIKING_HEALTH, AirShipDefines::VIKING_DAMAGE));
    terran.emplace_back(new Viking("Viking", AirShipDefines::VIKING_HEALTH, AirShipDefines::VIKING_DAMAGE));
    terran.emplace_back(new Viking("Viking", AirShipDefines::VIKING_HEALTH, AirShipDefines::VIKING_DAMAGE));
    terran.emplace_back(new Viking("Viking", AirShipDefines::VIKING_HEALTH, AirShipDefines::VIKING_DAMAGE));
    terran.emplace_back(new Viking("Viking", AirShipDefines::VIKING_HEALTH, AirShipDefines::VIKING_DAMAGE));
    terran.emplace_back(new Viking("Viking", AirShipDefines::VIKING_HEALTH, AirShipDefines::VIKING_DAMAGE));
    terran.emplace_back(new Viking("Viking", AirShipDefines::VIKING_HEALTH, AirShipDefines::VIKING_DAMAGE));
    terran.emplace_back(new Viking("Viking", AirShipDefines::VIKING_HEALTH, AirShipDefines::VIKING_DAMAGE));


    protoss.emplace_back(new Carrier("Carrier", AirShipDefines::CARRIER_HEALTH, AirShipDefines::CARRIER_DAMAGE,
                                     AirShipDefines::CARRIER_SHIELD, 8));

    protoss.emplace_back(new Carrier("Carrier", AirShipDefines::CARRIER_HEALTH, AirShipDefines::CARRIER_DAMAGE,
                                     AirShipDefines::CARRIER_SHIELD, 8));
}

void GenerateVectorTest009(std::vector<std::unique_ptr<Ship>> &terran, std::vector<std::unique_ptr<Ship>> &protoss) {
    terran.emplace_back(new BattleCruiser("Battlecruiser", AirShipDefines::BATTLE_CRUSER_HEALTH,
                                          AirShipDefines::BATTLE_BRUSER_DAMAGE));

    terran.emplace_back(new BattleCruiser("Battlecruiser", AirShipDefines::BATTLE_CRUSER_HEALTH,
                                          AirShipDefines::BATTLE_BRUSER_DAMAGE));
    terran.emplace_back(new Viking("Viking", AirShipDefines::VIKING_HEALTH, AirShipDefines::VIKING_DAMAGE));
    terran.emplace_back(new Viking("Viking", AirShipDefines::VIKING_HEALTH, AirShipDefines::VIKING_DAMAGE));
    terran.emplace_back(new BattleCruiser("Battlecruiser", AirShipDefines::BATTLE_CRUSER_HEALTH,
                                          AirShipDefines::BATTLE_BRUSER_DAMAGE));
    terran.emplace_back(new BattleCruiser("Battlecruiser", AirShipDefines::BATTLE_CRUSER_HEALTH,
                                          AirShipDefines::BATTLE_BRUSER_DAMAGE));
    terran.emplace_back(new Viking("Viking", AirShipDefines::VIKING_HEALTH, AirShipDefines::VIKING_DAMAGE));
    terran.emplace_back(new Viking("Viking", AirShipDefines::VIKING_HEALTH, AirShipDefines::VIKING_DAMAGE));
    terran.emplace_back(new BattleCruiser("Battlecruiser", AirShipDefines::BATTLE_CRUSER_HEALTH,
                                          AirShipDefines::BATTLE_BRUSER_DAMAGE));
    terran.emplace_back(new BattleCruiser("Battlecruiser", AirShipDefines::BATTLE_CRUSER_HEALTH,
                                          AirShipDefines::BATTLE_BRUSER_DAMAGE));

    protoss.emplace_back(new Carrier("Carrier", AirShipDefines::CARRIER_HEALTH, AirShipDefines::CARRIER_DAMAGE,
                                     AirShipDefines::CARRIER_SHIELD, 8));

    protoss.emplace_back(new Carrier("Carrier", AirShipDefines::CARRIER_HEALTH, AirShipDefines::CARRIER_DAMAGE,
                                     AirShipDefines::CARRIER_SHIELD, 8));
    protoss.emplace_back(new Phoenix("Phoenix", AirShipDefines::PHOENIX_HEALTH, AirShipDefines::PHOENIX_DAMAGE,
                                     AirShipDefines::PHOENIX_SHIELD));
    protoss.emplace_back(new Phoenix("Phoenix", AirShipDefines::PHOENIX_HEALTH, AirShipDefines::PHOENIX_DAMAGE,
                                     AirShipDefines::PHOENIX_SHIELD));
    protoss.emplace_back(new Carrier("Carrier", AirShipDefines::CARRIER_HEALTH, AirShipDefines::CARRIER_DAMAGE,
                                     AirShipDefines::CARRIER_SHIELD, 8));

    protoss.emplace_back(new Carrier("Carrier", AirShipDefines::CARRIER_HEALTH, AirShipDefines::CARRIER_DAMAGE,
                                     AirShipDefines::CARRIER_SHIELD, 8));
    protoss.emplace_back(new Phoenix("Phoenix", AirShipDefines::PHOENIX_HEALTH, AirShipDefines::PHOENIX_DAMAGE,
                                     AirShipDefines::PHOENIX_SHIELD));
    protoss.emplace_back(new Phoenix("Phoenix", AirShipDefines::PHOENIX_HEALTH, AirShipDefines::PHOENIX_DAMAGE,
                                     AirShipDefines::PHOENIX_SHIELD));
    protoss.emplace_back(new Carrier("Carrier", AirShipDefines::CARRIER_HEALTH, AirShipDefines::CARRIER_DAMAGE,
                                     AirShipDefines::CARRIER_SHIELD, 8));

    protoss.emplace_back(new Carrier("Carrier", AirShipDefines::CARRIER_HEALTH, AirShipDefines::CARRIER_DAMAGE,
                                     AirShipDefines::CARRIER_SHIELD, 8));
}

void GenerateVectorTest0010(std::vector<std::unique_ptr<Ship>> &terran, std::vector<std::unique_ptr<Ship>> &protoss) {
    terran.emplace_back(new BattleCruiser());
    terran.emplace_back(new BattleCruiser());

    terran.emplace_back(new Viking());
    terran.emplace_back(new Viking());

    terran.emplace_back(new BattleCruiser());
    terran.emplace_back(new BattleCruiser());

    terran.emplace_back(new Viking());
    terran.emplace_back(new Viking());

    terran.emplace_back(new BattleCruiser());
    terran.emplace_back(new BattleCruiser());

    terran.emplace_back(new Viking());
    terran.emplace_back(new Viking());
    terran.emplace_back(new Viking());
    terran.emplace_back(new Viking());
    terran.emplace_back(new Viking());
    terran.emplace_back(new Viking());
    terran.emplace_back(new Viking());
    terran.emplace_back(new Viking());
    terran.emplace_back(new Viking());
    terran.emplace_back(new Viking());
    terran.emplace_back(new Viking());
    terran.emplace_back(new Viking());

    terran.emplace_back(new BattleCruiser());
    terran.emplace_back(new BattleCruiser());
    terran.emplace_back(new BattleCruiser());
    terran.emplace_back(new BattleCruiser());
    terran.emplace_back(new BattleCruiser());
    terran.emplace_back(new BattleCruiser());

    terran.emplace_back(new Viking());
    terran.emplace_back(new Viking());
    terran.emplace_back(new Viking());
    terran.emplace_back(new Viking());
    terran.emplace_back(new Viking());

    terran.emplace_back(new BattleCruiser());
    terran.emplace_back(new BattleCruiser());
    terran.emplace_back(new BattleCruiser());
    terran.emplace_back(new BattleCruiser());
    terran.emplace_back(new BattleCruiser());

    terran.emplace_back(new Viking());
    terran.emplace_back(new Viking());
    terran.emplace_back(new Viking());
    terran.emplace_back(new Viking());
    terran.emplace_back(new Viking());






    protoss.emplace_back(new Carrier());
    protoss.emplace_back(new Carrier());

    protoss.emplace_back(new Phoenix());
    protoss.emplace_back(new Phoenix());

    protoss.emplace_back(new Carrier());
    protoss.emplace_back(new Carrier());

    protoss.emplace_back(new Phoenix());
    protoss.emplace_back(new Phoenix());

    protoss.emplace_back(new Carrier());
    protoss.emplace_back(new Carrier());


    protoss.emplace_back(new Phoenix());
    protoss.emplace_back(new Phoenix());
    protoss.emplace_back(new Phoenix());
    protoss.emplace_back(new Phoenix());
    protoss.emplace_back(new Phoenix());
    protoss.emplace_back(new Phoenix());
    protoss.emplace_back(new Phoenix());
    protoss.emplace_back(new Phoenix());
    protoss.emplace_back(new Phoenix());
    protoss.emplace_back(new Phoenix());
    protoss.emplace_back(new Phoenix());


    protoss.emplace_back(new Carrier());
    protoss.emplace_back(new Carrier());
    protoss.emplace_back(new Carrier());
    protoss.emplace_back(new Carrier());
    protoss.emplace_back(new Carrier());
    protoss.emplace_back(new Carrier());
    protoss.emplace_back(new Carrier());
    protoss.emplace_back(new Carrier());
    protoss.emplace_back(new Carrier());


    protoss.emplace_back(new Phoenix());
    protoss.emplace_back(new Phoenix());
    protoss.emplace_back(new Phoenix());
    protoss.emplace_back(new Phoenix());
    protoss.emplace_back(new Phoenix());
    protoss.emplace_back(new Phoenix());
    protoss.emplace_back(new Phoenix());

    protoss.emplace_back(new Carrier());
    protoss.emplace_back(new Carrier());
    protoss.emplace_back(new Carrier());
    protoss.emplace_back(new Carrier());
    protoss.emplace_back(new Carrier());

}


int main() {
    /// Testing raw ships.
    std::vector<std::unique_ptr<Ship> > terran;
    std::vector<std::unique_ptr<Ship> > protoss;
    /// Test 001 pass.
//    GenerateVectorTest001(terran, protoss);

    /// Test 002 pass.
//    GenerateVectorTest002(terran, protoss);

    /// Test 003 pass.
//    GenerateVectorTest003(terran, protoss);

    /// Test 004 pass.
//    GenerateVectorTest004(terran, protoss);

    /// Test 005 pass.
//    GenerateVectorTest005(terran, protoss);

    /// Test 006 pass.
//    GenerateVectorTest006(terran, protoss);

    /// Test 007 pass.
//    GenerateVectorTest007(terran, protoss);

    /// Test 008 pass.
//    GenerateVectorTest008(terran, protoss);

    /// Test 009 pass.
//    GenerateVectorTest009(terran, protoss);

    /// Test 0010 pass.
//    GenerateVectorTest0010(terran, protoss);

/// Tests for generating fleet automatically.
    Terran testTerran;
    testTerran.generateFleet("bbvvbbvvbbvvvvvvvvvvvvbbbbbbvvvvvbbbbbvvvvv");
    Protoss testProtos;
    testProtos.generateFleet("ccppccppccpppppppppppcccccccccpppppppccccc");
    int a = 4;

    while (true) {
        for (auto &el: testTerran.m_fleet) {
            el->dealDamage(testProtos.m_fleet[testProtos.m_fleet.size() - 1]);
            if (testProtos.m_fleet[testProtos.m_fleet.size() - 1]->GetHealth() <= 0) {
                std::cout << "Terran kill unit with id" << " " << testProtos.m_fleet.size() - 1 << std::endl;
                testProtos.m_fleet.erase(testProtos.m_fleet.cend());
            }
        }

        std::cout << "Last protoss ship with ID: " << testProtos.m_fleet.size() - 1 << ' '
                  << testProtos.m_fleet[testProtos.m_fleet.size() - 1]->GetHealth()
                  << ' ' << testProtos.m_fleet[testProtos.m_fleet.size() - 1]->GetShield() << std::endl;


        for (size_t i = 0; i < testProtos.m_fleet.size(); i++) {
            testProtos.m_fleet[i]->dealDamage(testTerran.m_fleet[testTerran.m_fleet.size() - 1]);
            if (testProtos.m_fleet[i]->GetName() == "Carrier" && !testProtos.m_fleet[i]->GetIsDoneShooting()) {
                i--;
            }
            if (testTerran.m_fleet[testTerran.m_fleet.size() - 1]->GetHealth() <= 0) {
                std::cout << "Protoss kill unit with id" << " " << testTerran.m_fleet.size() - 1 << std::endl;
                testTerran.m_fleet.erase(testTerran.m_fleet.cend());
            }
        }


        std::cout << "Last terran ship with ID: " << testTerran.m_fleet.size() - 1 << ' ' << testTerran.m_fleet[testTerran.m_fleet.size() - 1]->GetHealth()
                  << ' ' << std::endl;


    }



    /// Old way of testing
    /*
    while (true) {
        for (auto &el: terran) {
            el->dealDamage(protoss[protoss.size() - 1]);
            if (protoss[protoss.size() - 1]->GetHealth() <= 0) {
                std::cout << "Terran kill unit with id" << " " << protoss.size() - 1 << std::endl;
                protoss.erase(protoss.cend());
            }
        }

        std::cout << "Last protoss ship with ID: " << protoss.size() - 1 << ' '
                  << protoss[protoss.size() - 1]->GetHealth()
                  << ' ' << protoss[protoss.size() - 1]->GetShield() << std::endl;


        for (size_t i = 0; i < protoss.size(); i++) {
            protoss[i]->dealDamage(terran[terran.size() - 1]);
            if (protoss[i]->GetName() == "Carrier" && !protoss[i]->GetIsDoneShooting()) {
                i--;
            }
            if (terran[terran.size() - 1]->GetHealth() <= 0) {
                std::cout << "Protoss kill unit with id" << " " << terran.size() - 1 << std::endl;
                terran.erase(terran.cend());
            }
        }


        std::cout << "Last terran ship with ID: " << terran.size() - 1 << ' ' << terran[terran.size() - 1]->GetHealth()
                  << ' ' << std::endl;


    }
     */
}
