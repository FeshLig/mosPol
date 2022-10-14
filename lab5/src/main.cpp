#include "weapon.h"

struct Player {
    int id;
    string login;
    string password;
    void playerDataOutput() {
        cout << "ID: " << id << "\nLogin: " << login << "\nPassword: " << password << endl;
    }
};

int main() {
    int x;
    Weapon nothing;
    Weapon pistol("Pistol", 10, 1, CROSSBOW);
    MagicWeapon stuff("Stuff", 12, 2, 4, 4);

    if (pistol.getWeaponType() == ONEHANDED)
        cout << "Onehanded weapon" << endl;
    else if (pistol.getWeaponType() == TWOHANDED)
        cout << "Twohanded weapon" << endl;
     else if (pistol.getWeaponType() == BOW)
        cout << "Bow weapon" << endl;
     else if (pistol.getWeaponType() == CROSSBOW)
        cout << "Crossbow weapon" << endl;

    Player player1 = {01, "Abobus", "qwerty"};
    player1.playerDataOutput();

    cout << "MagicWeapon\n" << "Name: " << stuff.getName() << "\nDamage (total): " << stuff.getDamage() << "\nWeight: " << stuff.getWeight() << "\nType: " << stuff.getWeaponType() << "\nAdditional damage: " << stuff.getAdditionalDamage() << endl << endl;

    cout << "Pistol Damage: " << pistol.getDamage() << "\tStuff total damage: " << stuff.getDamage() << endl;
    if (pistol < stuff) cout << "Pistol < Stuff";
    else if (pistol > stuff) cout << "Pistol > Stuff";
    
    cin >> x;
}

void output_isHeavy(bool isHeavy) {
    if (isHeavy) {
        cout << "Weight is OK" << endl;
    } else {
        cout << "Weight is NOT OK" << endl;
    }
}
