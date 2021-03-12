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

      Weapon() :
      Weapon(int t);
      int type;
      int attack;
      };
      
    Weapon Wep(1);
    
    Weapon::Weapon(int t){
    type = t;
    if(type==1)
    attack = 20;
    }
