#include "weapon.h"

void output_isHeavy(bool isHeavy);

int MyMath::counter = 0;

int main() {
    int x;
    Weapon nothing;
    Weapon pistol("Pistol", 10, 1);

    cout << nothing.getName() << ' ' << nothing.getDamage() << ' ' << nothing.getWeight() << endl;
    cout << pistol.getName() << ' ' << pistol.getDamage() << ' ' << pistol.getWeight() << endl << endl;
    output_isHeavy(pistol.isHeavy());
    pistol.totalWeight(5);
    output_isHeavy(pistol.isHeavy());
    Weapon *newWeapon = new Weapon;
    delete newWeapon;
    Characteristic characteristic(15);
    
    cout << "\nTotal pistol damage: " << characteristic.GetDamage(&pistol) << endl << endl; 
    
    cout << "Result: " << MyMath::Add(8, 4) << " Count: " << MyMath::counter << endl << "Result: " << MyMath::Sub(8, 4) << " Count: " << MyMath::counter << endl << "Result: " << MyMath::Mult(8, 4) << " Count: " << MyMath::counter << endl << "Result: " << MyMath::Div(8, 4) << " Count: " << MyMath::counter << endl << endl;
    cin >> x;
}

void output_isHeavy(bool isHeavy) {
    if (isHeavy) {
        cout << "Weight is OK" << endl;
    } else {
        cout << "Weight is NOT OK" << endl;
    }
}
