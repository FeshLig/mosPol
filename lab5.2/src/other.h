#ifndef OTHER_H_
#define OTHER_H_

#include "weapon.h"
#include "magic_weapon.h"
#include "characteristic.h"
#include "utility_weapon.h"
#include "hands.h"

void output_isHeavy(bool isHeavy);

struct Player {
    int id;
    string login;
    string password;
    void playerDataOutput() {
        cout << "ID: " << id << "\nLogin: " << login << "\nPassword: " << password << endl;
    }
};

#endif  //  OTHER_H_
