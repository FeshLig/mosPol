#ifndef UTILITY_WEAPON_H_
#define UTILITY_WEAPON_H_

#include "weapon.h"

class UtilityWeapon : public Weapon {
    bool isUsed = false;
    public:
        void Attack() override {
            if (isUsed) {
                cout << "This weapon was used" << endl;
            } else if (!isUsed) {
                cout << "Attack with utility weapon" << endl;
                isUsed = true;
            }
        }
};


#endif  //  UTILITY_WEAPON_H_
