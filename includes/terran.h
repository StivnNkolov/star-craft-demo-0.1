#ifndef DEMO_TERRAN_H
#define DEMO_TERRAN_H

#include <vector>
#include <functional>
#include <map>
#include "abstract_classes.h"
#include "battle_cruiser.h"
#include "constants.h"

class Terran : public Race {

public:
    explicit Terran(const std::string &name = TerranConstants::TERRAN_NAME);

    void attackEnemy() override;
};

#endif //DEMO_TERRAN_H
