#include "../includes/protoss.h"
#include "../includes/carrier.h"
#include "../includes/phoenix.h"

Protoss::Protoss(const std::string &name) : Race(name) {
    m_tester.emplace(CarrierConstants::CARRIER_COMPOSITION_CHAR, [&]() { m_fleet.emplace_back(new Carrier); });
    m_tester.emplace(PhoenixConstants::PHOENIX_COMPOSITION_CHAR, [&]() { m_fleet.emplace_back(new Phoenix); });
}

void Protoss::attackEnemy() {}