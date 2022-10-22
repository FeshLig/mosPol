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
        void totalWeight(int weight);

        virtual void Attack() = 0;

        bool operator >(Weapon &otherWeapon) {
            return this->getDamage() > otherWeapon.getDamage();
        }
        bool operator <(Weapon &otherWeapon) {
            return this->getDamage() < otherWeapon.getDamage();
        }
};

enum {
    ONEHANDED,
    TWOHANDED,
    BOW,
    CROSSBOW,
    MAGIC
};

#endif  //  WEAPON_H_
