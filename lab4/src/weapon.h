#ifndef WEAPON_H_
#define WEAPON_H_

#include <iostream>
#include <string>

#define MAX_WEIGHT 5

using namespace std;

class Weapon {
    friend class Characteristic;
    string name;
    int damage;
    int weight;
    
    public:
        Weapon(string name, int damage, int weight);
        Weapon();
        ~Weapon();

        string getName();
        void setName(string name);
        int getDamage();
        void setDamage(int damage);
        int getWeight();
        void setWeight(int weight);
        bool isHeavy();
        void totalWeight(Weapon weapon);
        void totalWeight(int weight);
};

class Characteristic {
    int strength;
    public:
        Characteristic(int strength) { this->strength = strength; }
        int GetDamage(Weapon *weapon) { return weapon->getDamage() + strength; } 
};

class MyMath {
    public: 
        static int counter;
        static int Add(int a, int b) { counter++; return a + b; }
        static int Sub(int a, int b) { counter++; return a - b; }
        static int Mult(int a, int b) { counter++; return a * b; }
        static int Div(int a, int b) { counter++; return a / b; }
};



#endif  //  WEAPON_H_
