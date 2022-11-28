// lab32.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
int arraySum(int* begin, int* end) {
  int sum = 0;

  int* pointer = begin;

  for (int* pointer = begin; pointer != end; pointer++) {
    sum += *pointer;
  }

  return sum;
}

int sum(int a, int b) {
  return a + b;
}

int diff(int a, int b) {
  return a - b;
}
int(*getOperand(char operandSymbol))(int, int) {
  if (operandSymbol == '+') {
    return sum;
  }

  return diff;
}

int main() {
    setlocale(LC_ALL, "");
    cout << "Hello World!\n";
    cout << "Работу выполнила Арзамасова АВ группа 211-172" << endl;
  int array[] = { 1, 2, 3, 4 };
  cout << "массив " << array << endl;
  cout << "сумма массива " << arraySum(array, (array + 4)) << endl;
  auto sumOperand = getOperand('+');
  cout << "функция возвращает указатель на сумму " << sumOperand(1, 2) << endl;
  auto diffOperand = getOperand('-');
  cout << "функция возвращает указатель на разность " << diffOperand(1, 2) << endl;
  float* a = new float(1.1);
  cout << *a << endl;
  delete a;
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
