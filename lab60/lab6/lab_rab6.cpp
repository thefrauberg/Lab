#include "YearException.cpp"
#include <string>
#include <iostream>

using namespace std;
int x;
int birth_year;

int GetYear() {
	SYSTEMTIME st;
	GetLocalTime(&st);
	return (st.wYear);
}

void text_num(int x) {
	if (x != 1 && x != 2 && x != 3) throw "Некорректное значение";
	if (x == 1) cout << "Один\n";
	if (x == 2) cout << "Два\n";
	if (x == 3) cout << "Три\n";
}
int main()
{
    setlocale(LC_ALL, "");
    cout << "Hello World!\n";
metka1:
	try {
		cout << " введите число 1, 2 или 3:\t";
		cin >> x;
		cout << endl;
		text_num(x);
	}
	catch (const char* e) {
		cout << e << endl;
		goto metka1;
	}

metka2:
	/*cout << endl;
	try {
		cout << " введите год своего рождения:\t";
		cin >> birth_year;
		if (birth_year < 0) throw "Вы ввели отрицательное число!";
		if (birth_year < 1850) throw "Что-то не верится...";
		if (birth_year > GetYear()) throw "Вы ещё не родились";
		cout<<"Спасибо!" << endl;
	}
	catch(const char* w) {
		cout << w << endl;
		goto metka2;
	}
	*/
	cout << endl;
	try {
		cout << " введите год своего рождения:\t";
		cin >> birth_year;
		if (birth_year < 0) throw YearException(Type_year_error::NEGATIVE);
		if (birth_year < 1850) throw YearException(Type_year_error::SMALL);
		if (birth_year > GetYear()) throw YearException(Type_year_error::BIG);
		cout << "Спасибо!" << endl;
	}
	catch (YearException& err) {
		cout << err.what() << endl;
		goto metka2;
	}
	catch (exception& err) {
		cout << err.what() << endl;
		goto metka2;
	}
}
