#include <iostream>

#include "MyMath.hpp"
#include "Weapon.hpp"
#include "properties.hpp"

using namespace std;

int main() {
  setlocale(LC_ALL, "");
  cout << "211-172 Арзамасова Анна\n";
  Weapon aerondight("Арондит", 18, 9);
  cout << aerondight << endl;
  Weapon* iris = new Weapon("Ирис", 15, 4);
  cout << *iris << endl;
  cout << "Арондит уместится в мешок Ведьмака вместимостью 9кг? " << (aerondight.canTake(9) ? "да" : "нет") << endl;
  cout << "Какой вместительностью нужен мешок если помимо Арондита в мешке будет лежать трофей Ведьмака весом 30кг? " << aerondight.getSumWeightWith(30) << endl;
  cout << "Сколько килограммов будет тащить Ведьмак на спине, если возьмет Арондит и Ирис?" << aerondight.getSumWeightWith(*iris) << endl;
  cout << "Арондит: " << aerondight.getTitle() << endl;
  cout << "Вес: " << aerondight.getWeight() << endl;
  cout << "Урон: " << aerondight.getDamage() << endl;
  aerondight.setDamage(31);
  cout << "урон: " << aerondight.getDamage() << endl;
  Characteristic aerondightproperties(10);
  cout << "Свойства " << aerondightproperties.getDamage(aerondight) << endl;
  cout << "MyMath: 1 + 2 = " << MyMath::add(1, 2) << endl;
  cout << "MyMath: 1 - 2 = " << MyMath::sub(1, 2) << endl;
  cout << "MyMath: 1 * 2 = " << MyMath::mult(1, 2) << endl;
  cout << "MyMath: 1 / 2 = " << MyMath::div(1, 2) << endl;
    delete iris;
  return 0;
}