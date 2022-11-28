// lab41.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
    friend ostream& operator<<(ostream& out, Weapon& weapon) {
        out << "Оружие \"" << weapon.title << "\": урон=" << weapon.damage << ", вес=" << weapon.weight << "kg";
        return out;
    }
};

int main() {
    setlocale(LC_ALL, "");
    cout << "Hello World!\n";
    cout << "Работу выполнила Арзамасова АВ группа 211-172" << endl;
    Weapon aerondight("Арондит", 18, 9);
    Weapon untitledWeapon;
    cout << aerondight << endl << untitledWeapon << endl;
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
