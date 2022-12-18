#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

enum class Type_year_error
{
	NEGATIVE,
	BIG,
	SMALL

};

class YearException : public std::exception
{
public:
	YearException(Type_year_error code) : code(code) {};
	const char* what() const throw() override{
		if (code == Type_year_error::NEGATIVE) return "�� ����� ������������� �����!";
		if (code == Type_year_error::SMALL) return "���-�� �� �������...";
		if (code == Type_year_error::BIG) return "�� ��� �� ��������";
	}
private:
	Type_year_error code;
};