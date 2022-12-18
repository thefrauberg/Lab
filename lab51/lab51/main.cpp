#include <iostream>

#include "Player.hpp"
#include "Weapon.hpp"
#include "Weapon1.hpp"

using namespace std;

int main() {
	setlocale(LC_ALL, "");
    cout << "211-172 Арзамасова Анна\n";
  Weapon Iris("Ирис", 15, 4, WeaponType::ONEHANDED);
  Weapon Aerondight("Арондит", 18, 9, WeaponType::TWOHANDED);
  Weapon Bow("Лук", 11, 0.7, WeaponType::BOW);
  Weapon Crossbow("Арбалет", 19, 1, WeaponType::CROSSBOW);

  cout << Ирис << endl;
  cout << Арондит << endl;
  cout << Лук << endl;
  cout << Арбалет << endl;

  Player Wither("Witcher", "MyStrongPassword");

  cout << Witcher << endl;

 Weapon1 LaserAerondight("Арондит", 18, 9,  WeaponType::TWOHANDED);

  cout << LaserAerondight << endl;
  cout << "Арондит уместится в мешок Ведьмака вместимостью 9кг?:" << (LaserAerondight.canTake(9) ? "Yes" : "No") << endl;
  cout << "Какая вместимость если Ведьмак возьмет Арондит и Ирис? " << Aerondight.getSumWeightWith(Iris) << endl;
  cout << endl;
  return 0;
}