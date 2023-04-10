//class�� ���� ���μ����� �����ִ� source file.
#include <iostream>	//iostream�� ��� �����ϰ� ��.
using std::cout;	//iostream�� ��� �� cout����� ����ϰ� ��.
using std::endl;	//iostream�� ��� �� endl����� ����ϰ� ��.

#include "Date.h"	//������� "Date.h"�� ��� �����ϰ� ��.

Date::Date(int m, int d, int y) {	//������, �Ķ���ʹ� ������ ���� 3��(m, d, y)
	setMonth(m);					//m���� setMonth�� ����
	setDay(d);						//d���� setDay�� ����
	setYear(y);						//y���� setYear�� ����
}

void Date::setMonth(int m) {				//set�Լ�, �����ڿ��� �Ѱܹ��� m���� �Լ� ���ο��� ���Ǵ� m�� ����. return�� ����.
	month = (m >= 1 && m <= 12) ? m : 1;	//m�� 1���� ũ�� 12���� ���� �� month = m�̰�, �׷��� ������ month = 1
}

void Date::setDay(int d) {					//set�Լ�, �����ڿ��� �Ѱܹ��� d���� �Լ� ���ο��� ���Ǵ� d�� ����. return�� ����.
	day = d;								//day�� d���� ����
}

void Date::setYear(int y) {					//set�Լ�, �����ڿ��� �Ѱܹ��� y���� �Լ� ���ο��� ���Ǵ� y�� ����. return�� ����.
	year = y;								//year�� y���� ����
}

int Date::getMonth() { return month; }		//month�� private�� �ֱ� ������ get�Լ� ���, return type�� �������̱� ������ month���� �������·� �Ѱ���. 
int Date::getDay() { return day; }			//day�� private�� �ֱ� ������ get�Լ� ���, return type�� �������̱� ������ day���� �������·� �Ѱ���.
int Date::getYear() { return year; }		//year�� private�� �ֱ� ������ get�Լ� ���, return type�� �������̱� ������ year���� �������·� �Ѱ���.

void Date::displayDate() {										//displayDate�Լ� ����. return �� ����.
	cout << month << " / " << day << " / " << year << endl;		//month / day / year ���·� ���� ���.
}