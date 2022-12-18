#include "Weapon1.hpp"

Weapon1::Weapon1(): Weapon(), Damage1(0) {}

Weapon1::Weapon1(string title, float damage, float Damage1, float weight, WeaponType type): Weapon(title, damage, weight, type), Damage1(Damage1) {}

MagicWeapon::~Weapon1() {
  cout << *this << " | Was deleted" << endl;
}

float Weapon1::getDamage1() {
  return this->Damage1;
}

ostream& operator<<(ostream& out, Weapon1 weapon) {
  out << weapon.getTypeTitle() << "(1) \"" << weapon.getTitle() << "\": damage=" << weapon.getDamage() << "(+" << weapon.getDamage1() << " 1), weight=" << weapon.getWeight() << "kg";

  return out;
}