#pragma once

#include <string>
#include <iostream>

#include "properties.hpp"

using namespace std;

class Weapon {

  friend class Characteristic;
private:

  float damage;
  float weight;
  string title;

public:
  Weapon();
  Weapon(string, float, float);

public:
  ~Weapon();

public:

  string getTitle();

  float getWeight();

  float getDamage();

public:

  void setDamage(float);

public:
  friend ostream& operator<<(ostream&, Weapon&);

public:
  bool canTake(float);

  float getSumWeightWith(float);

  float getSumWeightWith(Weapon&);
};