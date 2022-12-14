// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	cout << "Hello World!\n";
	cout << "Работу выполнила Арзамасова АВ группа 211-172" << endl;
	int a = 8356;
	int* a_ptr = &a;
	cout << "указатель: " << a_ptr << ", variable value: " << *a_ptr << endl;
	*a_ptr = 4567;
	cout << "переменная: " << a << endl;
	int array[] = { 1, 2, 3, 4, 5 };
	cout << *array << " " << *(array + 1) << " " << *(array + 2) << " " << *(array + 3) << " " << *(array + 4) << endl;
	int c = 5;
	int* const c_ptr = &c;
	/*
	E0137: expression must be a modifiable value
	c_ptr = &a;
	*/
	*c_ptr = 10;
	cout << "новое значение " << c << endl;

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
