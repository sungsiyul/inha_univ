//class에 대한 세부설명이 적혀있는 source file.
#include <iostream>	//iostream를 사용 가능하게 함.
using std::cout;	//iostream의 기능 중 cout기능을 사용하게 함.
using std::endl;	//iostream의 기능 중 endl기능을 사용하게 함.

#include "Date.h"	//헤더파일 "Date.h"를 사용 가능하게 함.

Date::Date(int m, int d, int y) {	//생성자, 파라미터는 정수형 변수 3개(m, d, y)
	setMonth(m);					//m값을 setMonth로 보냄
	setDay(d);						//d값을 setDay로 보냄
	setYear(y);						//y값을 setYear로 보냄
}

void Date::setMonth(int m) {				//set함수, 생성자에서 넘겨받은 m값을 함수 내부에서 사용되는 m에 대입. return값 없음.
	month = (m >= 1 && m <= 12) ? m : 1;	//m이 1보다 크고 12보다 작을 때 month = m이고, 그렇지 않으면 month = 1
}

void Date::setDay(int d) {					//set함수, 생성자에서 넘겨받은 d값을 함수 내부에서 사용되는 d에 대입. return값 없음.
	day = d;								//day에 d값을 대입
}

void Date::setYear(int y) {					//set함수, 생성자에서 넘겨받은 y값을 함수 내부에서 사용되는 y에 대입. return값 없음.
	year = y;								//year에 y값을 대입
}

int Date::getMonth() { return month; }		//month가 private에 있기 때문에 get함수 사용, return type이 정수형이기 때문에 month값을 정수형태로 넘겨줌. 
int Date::getDay() { return day; }			//day가 private에 있기 때문에 get함수 사용, return type이 정수형이기 때문에 day값을 정수형태로 넘겨줌.
int Date::getYear() { return year; }		//year가 private에 있기 때문에 get함수 사용, return type이 정수형이기 때문에 year값을 정수형태로 넘겨줌.

void Date::displayDate() {										//displayDate함수 선언. return 값 없음.
	cout << month << " / " << day << " / " << year << endl;		//month / day / year 형태로 값을 출력.
}