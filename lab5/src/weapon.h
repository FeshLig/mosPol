#ifndef WEAPON_H_
#define WEAPON_H_

#include <iostream>
#include <string>

#define MAX_WEIGHT 5

using namespace std;

void output_isHeavy(bool isHeavy);

class Weapon {
    friend class Characteristic;
    string name;
    int damage;
    int weight;
    int weaponType;
    
    public:
        Weapon(string name, int damage, int weight, int weaponType);
        Weapon();
        ~Weapon();

        string getName();
        void setName(string name);
        virtual int getDamage();
        void setDamage(int damage);
        int getWeight();
        void setWeight(int weight);
        int getWeaponType();
        bool isHeavy();
        void totalWeight(Weapon weapon);
        void totalWeight(int weight);

        bool operator >(Weapon &otherWeapon) {
            return this->getDamage() > otherWeapon.getDamage();
        }
        bool operator <(Weapon &otherWeapon) {
            return this->getDamage() < otherWeapon.getDamage();
        }
};

class MagicWeapon : public Weapon {
    int additionalDamage;

    public:
        MagicWeapon(string name, int damage, int weight, int weaponType, int additionalDamage) : Weapon(name, damage, weight, weaponType) {
            this->additionalDamage = additionalDamage;
        }
        MagicWeapon() : MagicWeapon::MagicWeapon("default", 0, 0, 4, 0) {}
        int getAdditionalDamage() {return additionalDamage;}
        int getDamage() override {return Weapon::getDamage() + getAdditionalDamage();}

};

class Characteristic {
    int strength;
    public:
        Characteristic(int strength) { this->strength = strength; }
        int GetDamage(Weapon *weapon) { return weapon->getDamage() + strength; } 
};

enum {
    ONEHANDED,
    TWOHANDED,
    BOW,
    CROSSBOW,
    MAGIC
};

#endif  //  WEAPON_H_
