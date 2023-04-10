#ifndef DATE_H	//만약 DATE_H가 선언 되어있지 않다면 아래를 실행하고, 선언되어있다면 #endif로 간다.
#define DATE_H	//헤더파일인 date.h를 사용.

class Date {	//Date라는 이름의 class(설계도)를 만든다.
private:		//주로 멤버 변수 선언.
	int month;	//month라는 정수형 변수 선언.
	int day;	//day라는 정수형 변수 선언.
	int year;	//year라는 정수형 변수 선언.
public:									//주로 생성자, 소멸자, 멤버 함수 선언
	Date(int m=0, int d=0, int y=0);	//생성자 선언, 3개의 parameters가 있고, 모두 default 값을 0으로 가짐.
	void setMonth(int m);				//month의 값을 수정할 수 있는 set함수.
	int getMonth();						//month의 값을 불러오는 get함수.
	void setDay(int d);					//day의 값을 수정할 수 있는 set함수.
	int getDay();						//day의 값을 불러오는 get함수.
	void setYear(int y);				//year의 값을 수정할 수 있는 set함수.
	int getYear();						//year의 값을 불러오는 get함수.
	void displayDate();					//displayDate함수의 prototype
};										//class를 닫아줄 때 항상 세미콜론을 붙여줘야함.

#endif			//#ifdef에서 헤더파일이 이미 선언되어있다면 함수가 바로 여기로 와서 종료됨.
