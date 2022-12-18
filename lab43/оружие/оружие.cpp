// оружие.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Оружие.hpp"
Weapon::Weapon() : Weapon("Untitled", 0, 0) {}
Weapon::Weapon(string title, float damage, float weight) : title(title), damage(damage), weight(weight) {}

Weapon::~Weapon() {
	cout << *this << " | Оружие неактивно, прочность <30% не позволяет воспользоваться оружием" << endl;
}

ostream& operator<<(ostream& out, Weapon& weapon) {
	out << "оружие \"" << weapon.title << "\": урон = " << weapon.damage << ", вес = " << weapon.weight << "кг";
	return out;
}

bool Weapon::canTake(float maxWeight) {
	return maxWeight >= this->weight;
}

float Weapon::getSumWeightWith(float loadWeight) {
	return this->weight + loadWeight;
}

float Weapon::getSumWeightWith(Weapon& weapon) {
	return getSumWeightWith(weapon.weight);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
