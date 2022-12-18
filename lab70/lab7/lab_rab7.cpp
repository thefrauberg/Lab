#define _USE_MATH_DEFINES 
#include <cmath>
#include <iostream>
#include <regex>
#include <fstream>
#include <string>
#include <vector>
#include "Header.h"



using namespace std;

void func1(vector<float> v0) {
	for (int i = 0; i < v0.size(); i++) { cout << v0[i] << endl; }
	cout << "----------\n";
}



void z1() {
	//Задание 7.1
	setlocale(LC_ALL, "");
	cout << "Введите строку: ";
	string str1;
	cin >> str1; cout << endl;
	cout << "Подстрока с символами со 2-го по 4-й включительно: " << str1.substr(1, 3) << endl;
	if ((str1.find('a'))) cout << "Символа a не найдено" << endl;
}



void z2() {
	//Задание 7.2
	setlocale(LC_ALL, "");
m1:cout << "Введите свое имя(анг.раскладка): ";
	string name;
	cin >> name;
	regex reg1("^[A-Z][a-z]{1,19}$");
	if (regex_search(name, reg1)) {
	}
	else {
		goto m1;
	}
}


void z3() {
	//Задание 7.3
	 setlocale(LC_ALL, "");
	cout << "Введите радиус окружности: ";
	int r;
	cin >> r;
	double l;
	l = 2 * M_PI * r;
	cout << "Длина окружности = " << l << endl;
	double rl = trunc(l * 1000 + 0.5) / 1000;
	cout << "Длина окружности, округленная до трех знаков = " << rl << endl;
	string str3;
	fstream file1;
	string data;
	string line;
	bool flag = true;
	while (flag) {
		cout << "Введите произвольную строку: ";
		cin >> str3;

		if (str3 == "exit") {
			flag = false;
		}
		else if (str3 == "read") {
			file1.open("new_file.txt", ios::in);
			while (getline(file1, line)) {
				data += line + "\n";
			}
			file1.close();
			cout << data << endl;
			data = "";
		}
		else if (str3 == "erase") {
			ofstream file1("new_file.txt");
			file1.close();
		}
		else {
			file1.open("new_file.txt", ios::app);
			file1 << str3 << endl;
			file1.close();
		}
	}
}


void z4() {
	//Задание 7.4
	vector<float> v1;
	for (int i = 0; i <= 4; i++) { v1.push_back(i); }
	func1(v1);
	auto i = v1.begin();
	i++;
	i++;
	i++;
	v1.insert(i, -100); func1(v1);
	v1.pop_back(); func1(v1);

	string test_string1 = "Элемент 1";
	string test_string2 = "Элемент 2";

	string test_string1_2 = "Элемент 3";
	string test_string2_2 = "Элемент 4";

	Settings* test1 = new Settings();
	test1->add(test_string1, test_string2);
	test1->print(test_string1);

	Settings* test2 = new Settings();
	test1->add(test_string1_2, test_string2_2);
	test1->print(test_string1_2);
	cout << "Еще один элемент" << endl;
	cout << Settings::map["Элемент 1"] << endl;
	cout << Settings::map["Элемент 2"] << endl;
}



std::map<std::string, std::string> Settings::map;

void main(){
	setlocale(LC_ALL, "rus");
	
	bool flag0 = false;
	while (!flag0) {
		cout << "Все пункты задания 7 собраны в одной программе. Выберите задание (1-4) -> ";
		int n;
		cin >> n;
		if (n == 1) { z1(); flag0 = true;}
		else if (n == 2) { z2(); flag0 = true;}
		else if (n == 3) { z3(); flag0 = true;}
		else if (n == 4) { z4(); flag0 = true;}
	}
}
