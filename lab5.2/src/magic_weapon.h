#ifndef MAGIC_WEAPON_H_
#define MAGIC_WEAPON_H_

#include "weapon.h"

class MagicWeapon : public Weapon {
    int additionalDamage;

    public:
        MagicWeapon(string name, int damage, int weight, int weaponType, int additionalDamage) : Weapon(name, damage, weight, weaponType) {
            this->additionalDamage = additionalDamage;
        }
        MagicWeapon() : MagicWeapon::MagicWeapon("default", 0, 0, 4, 0) {}
        int getAdditionalDamage() {return additionalDamage;}
        int getDamage() override {return Weapon::getDamage() + getAdditionalDamage();}

        void Attack() override {cout << "Attack with magical weapon\n";}

};

#endif  //  MAGIC_WEAPON_H_
