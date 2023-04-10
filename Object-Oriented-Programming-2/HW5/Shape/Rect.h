#pragma once

#include "Shape.h"

class Rect : public Shape {		//Shape 클래스를 상속받음.
private:
	double width;				//가로
	double height;				//세로

public:
	Rect(double, double);		//생성자
	~Rect();					//소멸자
	void setWidthHeight(double, double);	//width와 height를 지정하는 set함수
	double getWidth();			//width를 불러오는 get함수
	double getHeight();			//height를 불러오는 get함수
	virtual double getArea();	//area를 불러오는 get함수
	virtual void print();		//각 파생클래스의 멤버를 출력하는 print함수
};