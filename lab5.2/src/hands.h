#ifndef HANDS_H_
#define HANDS_H_

template<typename T1, typename T2>
class Hands {
    T1 leftHandWeapon;
    T2 rightHandWeapon;

    public:
        Hands(T1 leftHandWeapon, T2 rightHandWeapon) {
            this->leftHandWeapon = leftHandWeapon;
            this->rightHandWeapon = rightHandWeapon;
        }

        T1 getLeftHandWeapon() {return leftHandWeapon;}
        void setLeftHandWeapon(T1 weapon) {leftHandWeapon = weapon;}
        T2 getRightHandWeapon() {return rightHandWeapon;}
        void setRightHandWeapon(T2 weapon) {rightHandWeapon = weapon;}
};

#endif  //  HANDS_H_
