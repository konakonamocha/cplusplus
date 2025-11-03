#include <iostream>

/*
TODO
Reload function for weapon and for all derived classes
create an inventory for the player (set of weapons)
*/

class Weapon { // abstract class (abstract if atleast one pure virtual function exist)
public:
    virtual void use(void) = 0; // pure virtual function
};

class Gun : public Weapon {
public:
    void use(void) override { // adding virtual keyword makes the compiler determine which shoot method to call depending on the object, only needed for base class
        std::cout << "BANG!" << std::endl;
    }
};

class MachineGun : public Gun {
public:
    int magazine = 20;
    void use(void) override { // override keyword is for protection, checks that u followed the same header as the base class
        while (magazine-- > 0) {
            std::cout << "BANG!";
        }
    std::cout << '\n';
    magazine = 20;
    }
};

class Bazooka : public Weapon {
public: 
    void use(void) override {
        std::cout << "BOOM!" << std::endl;
    }
};

class Knife : public Weapon {
public: 
    void use(void) override {
        std::cout << "SLASH!" << std::endl;
    }
};

class Player {
public:
    void use_weapon(Weapon& weapon) {
        weapon.use();
    }
};


int main(void) {
    Gun gun;
    MachineGun mg;
    Bazooka bazooka;
    Knife knife;

    gun.use();
    //mg.shoot();

    //create a reference to a base class
    Gun& weapon = mg;
    weapon.use();

    std::cout << "-----------------------------------\n";
    Player player;
    player.use_weapon(knife);

    return 0;
}