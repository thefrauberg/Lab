#pragma once

#include "Weapon.hpp"

class Weapon1 : public Weapon {
private:
  float Damage1;

public:
  Weapon1();
  Weapon1(string, float, float, float, WeaponType);

public:
  ~Weapon1();

public:
  float getDamage1();

public:
  friend ostream& operator<<(ostream&, Weapon1&);
};