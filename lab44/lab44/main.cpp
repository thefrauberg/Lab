#include <iostream>

#include "MyMath.hpp"
#include "Weapon.hpp"
#include "properties.hpp"

using namespace std;

int main() {
  setlocale(LC_ALL, "");
  cout << "211-172 ���������� ����\n";
  Weapon aerondight("�������", 18, 9);
  cout << aerondight << endl;
  Weapon* iris = new Weapon("����", 15, 4);
  cout << *iris << endl;
  cout << "������� ��������� � ����� �������� ������������ 9��? " << (aerondight.canTake(9) ? "��" : "���") << endl;
  cout << "����� ���������������� ����� ����� ���� ������ �������� � ����� ����� ������ ������ �������� ����� 30��? " << aerondight.getSumWeightWith(30) << endl;
  cout << "������� ����������� ����� ������ ������� �� �����, ���� ������� ������� � ����?" << aerondight.getSumWeightWith(*iris) << endl;
  cout << "�������: " << aerondight.getTitle() << endl;
  cout << "���: " << aerondight.getWeight() << endl;
  cout << "����: " << aerondight.getDamage() << endl;
  aerondight.setDamage(31);
  cout << "����: " << aerondight.getDamage() << endl;
  Characteristic aerondightproperties(10);
  cout << "�������� " << aerondightproperties.getDamage(aerondight) << endl;
  cout << "MyMath: 1 + 2 = " << MyMath::add(1, 2) << endl;
  cout << "MyMath: 1 - 2 = " << MyMath::sub(1, 2) << endl;
  cout << "MyMath: 1 * 2 = " << MyMath::mult(1, 2) << endl;
  cout << "MyMath: 1 / 2 = " << MyMath::div(1, 2) << endl;
    delete iris;
  return 0;
}