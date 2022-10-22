#ifndef CHARACTERISTIC_H_
#define CHARACTERISTIC_H_

#include "weapon.h"

class Characteristic {
    int strength;
    public:
        Characteristic(int strength) { this->strength = strength; }
        int GetDamage(Weapon *weapon) { return weapon->getDamage() + strength; } 
};

#endif  //  CHARACTERISTIC_H_