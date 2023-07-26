
#ifndef DEMO_ABSTRACT_CLASSES_H
#define DEMO_ABSTRACT_CLASSES_H

#include <memory>
#include <vector>
#include <string>
#include <cmath>
#include <functional>
#include <map>

class Ship {
public:
    inline Ship(const std::string &name, int healthPoints, int damage) : m_name(name), m_healthPoints(healthPoints),
                                                                         m_damage(damage) {};

    virtual ~Ship() = default;

    virtual void takeDamage(int dmg) {
        m_healthPoints -= dmg;
    };

    virtual void dealDamage(std::unique_ptr<Ship> &defendingShip) = 0;

    std::string GetName() const {
        return m_name;
    };

    int GetDamage() const {
        return m_damage;
    }

    int GetHealth() const {
        return m_healthPoints;
    }

    virtual int GetShield() {
        return 0;
    };

    virtual bool GetIsDoneShooting() {
        return false;
    };

protected:
    std::string m_name;
    int m_damage{};
    int m_healthPoints{};
};

class ProtossShip : public Ship {
public:
    ProtossShip(const std::string &name, int healthPoints, int damage, int shield) : Ship(name, healthPoints, damage),
                                                                                     m_shield(shield) {}

    virtual void regenerateShield(int shieldToRegenerate, int maxPossibleShield) {
        m_shield += shieldToRegenerate;
        if (m_shield > maxPossibleShield) {
            m_shield = maxPossibleShield;
        }
    };

    int GetShield() override {
        return m_shield;
    }

    bool GetIsDoneShooting() override {
    };

    void takeDamage(int dmg) override {
        m_shield -= dmg;
        if (m_shield < 0) {
            m_healthPoints -= std::abs(m_shield);
            m_shield = 0;
        }
    }

protected:
    int m_shield{};
};

class Race {
public:
    explicit Race(const std::string &name) : m_name(name) {};

    virtual ~Race() = default;

    virtual void generateFleet(const std::string &fleetComposition) {
        for (auto const el:fleetComposition) {
            m_tester[el]();
        }
    };

    virtual void attackEnemy() = 0;

    std::vector<std::unique_ptr<Ship>> m_fleet;
protected:
    std::string m_name;
    std::map<char, std::function<void()>> m_tester;
};


#endif //DEMO_ABSTRACT_CLASSES_H
