#pragma once

#include "Shape.h"

class Circle : public Shape{	//Shape 클래스를 상속받음.
private:
	double radius;

public:
	Circle(double);				//생성자
	~Circle();					//소멸자
	void setRadius(double);		//radius를 지정하는 set함수
	double getRadius();			//radius를 불러오는 get함수
	virtual double getArea();	//area를 불러오는 get함수
	virtual void print();		//각 파생클래스의 멤버를 출력하는 print함수
};