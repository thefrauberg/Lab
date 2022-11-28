#include "properties.hpp"
#include "Weapon.hpp"

properties::properties(float strength): strength(strength) {}

float properties::getDamage(Weapon& weapon) {
  return this->strength + weapon.damage;
}