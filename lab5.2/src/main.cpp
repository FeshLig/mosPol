#include "other.h"

int main() {
    int x;
    MagicWeapon stuff("Stuff", 12, 2, 4, 4);
    UtilityWeapon holyGrenade;
    
    stuff.Attack();
    holyGrenade.Attack();
    holyGrenade.Attack();

    Hands <UtilityWeapon, int> playerHands(holyGrenade, 12);
    playerHands.getLeftHandWeapon().Attack();
    cout << playerHands.getRightHandWeapon() << endl;
    cin >> x;
}


