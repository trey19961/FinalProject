#pragma once


#include <vector>
#include "Item.h"
#include "map.h"
#include <string>
using namespace std;

class Weapon
{
 private:
       string name;
       vector<Item> inventory;
    public:
        Weapon() = default;
        virtual ~Weapon() = default;

        virtual void SetWeaponName(std::string weapName){ weaponName = weapName; }
        std::string ReturnWeaponName() const { return weaponName; }

        virtual void SetWeaponDamage(float weapDamage){ weaponDamage = weapDamage; }
        float ReturnWeaponDamage() const { return weaponDamage; }

    private:
        std::string weaponName = "Default_Weapon";
        float weaponDamage = 0;
};

class Cross_Bow : public Weapon
{

};
