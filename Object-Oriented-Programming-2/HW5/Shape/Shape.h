#pragma once

#include <iostream>
using namespace std;

//기본 클래스이자 추상클래스
class Shape {
private:
	double area;				//모든 객체에 필요한 area

public:
	Shape(double = 0.0);		//생성자, default constructor
	~Shape();					//소멸자
	void setArea(double);		//area를 지정하는 set함수
	virtual double getArea();	//area를 불러오는 get함수
	virtual void print()=0;		//각 파생클래스의 멤버를 출력하는 print함수, 순수 가상함수이므로 =0을 붙임.
};