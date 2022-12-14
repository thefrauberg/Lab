// lab42.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <string>
#include <iostream>

using namespace std;

class Weapon {
private:
    float damage;
    float weight;
    string title;

public:
    Weapon() : Weapon("Untitled", 0, 0) {}
    Weapon(string title, float damage, float weight) : title(title), damage(damage), weight(weight) {}
    ~Weapon() {
        cout << *this << " | Оружие неактивно, прочность <30% не позволяет воспользоваться оружием" << endl;
    }
        friend ostream& operator<<(ostream& out, Weapon& weapon) {
        out << "оружие \"" << weapon.title << "\": урон = " << weapon.damage << ", вес = " << weapon.weight << "кг";
        return out;
    }
    bool canTake(float maxWeight) {
        return maxWeight >= this->weight;
    }

    float getSumWeightWith(float loadWeight) {
        return this->weight + loadWeight;
    }

    float getSumWeightWith(Weapon& weapon) {
        return getSumWeightWith(weapon.weight);
    }
};

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
    delete iris;
    return 0;
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
