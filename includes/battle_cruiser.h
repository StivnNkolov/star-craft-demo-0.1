
#ifndef DEMO_BATTLE_CRUISER_H
#define DEMO_BATTLE_CRUISER_H

#include "abstract_classes.h"
#include "constants.h"

class BattleCruiser : public Ship {
public:
    BattleCruiser(const std::string &name = BattleCruiserConstants::BATTLE_CRUISER_NAME, int healthPoints = BattleCruiserConstants::BATTLE_CRUISER_HEALTH, int damage = BattleCruiserConstants::BATTLE_CRUISER_DAMAGE);

    void dealDamage(std::unique_ptr<Ship> &defendingShip) override;

private:
    int m_numberOfAttacks{};

private:
    bool isYamatoCannonReady() const;

    int returnYamatoCannonDamage();
};

#endif //DEMO_BATTLE_CRUISER_H
