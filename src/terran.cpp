#include "../includes/terran.h"
#include "../includes/viking.h"

Terran::Terran(const std::string &name) : Race(name) {
    m_tester.emplace(VikingConstants::VIKING_COMPOSITION_CHAR, [&]() { m_fleet.emplace_back(new Viking); });
    m_tester.emplace(BattleCruiserConstants::BATTLE_CRUISER_COMPOSITION_CHAR, [&]() { m_fleet.emplace_back(new BattleCruiser); });
}

void Terran::attackEnemy() {}