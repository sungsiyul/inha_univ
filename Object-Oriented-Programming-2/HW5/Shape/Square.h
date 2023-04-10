#pragma once

#include "Shape.h"

class Square : public Shape {	//Shape 클래스를 상속받음.
private:
	double side;				//한 변의 길이

public:
	Square(double);				//생성자
	~Square();					//소멸자
	void setSide(double);		//side를 지정하는 set함수
	double getSide();			//side를 불러오는 get함수
	virtual double getArea();	//area를 불러오는 get함수
	virtual void print();		//각 파생클래스의 멤버를 출력하는 print함수
};