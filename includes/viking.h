#ifndef DEMO_VIKING_H
#define DEMO_VIKING_H

#include "abstract_classes.h"
#include "constants.h"

class Viking : public Ship {
public:
    Viking(const std::string &name = VikingConstants::VIKING_NAME, int healthPoints = VikingConstants::VIKING_HEALTH, int damage = VikingConstants::VIKING_DAMAGE);

    void dealDamage(std::unique_ptr<Ship> &defendingShip) override;

private:
    int dealDoubleDamage();

};

#endif //DEMO_VIKING_H
