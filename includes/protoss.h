#ifndef DEMO_PROTOSS_H
#define DEMO_PROTOSS_H

#include "abstract_classes.h"
#include "constants.h"


class Protoss : public Race {

public:
    explicit Protoss(const std::string &name = ProtossConstants::PROTOSS_NAME);

    void attackEnemy() override;

};


#endif //DEMO_PROTOSS_H
