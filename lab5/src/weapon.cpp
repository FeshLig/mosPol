#include "weapon.h"

Weapon::Weapon(string name, int damage, int weight, int weaponType) {
    this->name = name;
    this->damage = damage;
    this->weight = weight;
    this->weaponType = weaponType;
}

Weapon::Weapon() : Weapon::Weapon("default", 0, 0, 0) {}

Weapon::~Weapon() {
    // cout << "Name: " << name << endl << "Damage: " << damage << endl << "Weight: " << weight << endl;
    //cout << "Weapon destroyed\n";
}

string Weapon::getName() {
    return name;
}
void Weapon::setName(string name) {
    this->name = name;
}

int Weapon::getDamage() {
    return damage;
}
void Weapon::setDamage(int damage) {
    this->damage = damage;
}

int Weapon::getWeight() {
    return weight;
}
void Weapon::setWeight(int weight) {
    this->weight = weight;
}

int Weapon::getWeaponType() {
    return weaponType;
}

bool Weapon::isHeavy() {
    return weight < MAX_WEIGHT ? true : false;
}

void Weapon::totalWeight(Weapon weapon) { totalWeight(weapon.getWeight()); }
void Weapon::totalWeight(int weight) { setWeight(this->weight + weight); }
