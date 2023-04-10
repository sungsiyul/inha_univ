#include "Rect.h"

//생성자
Rect::Rect(double wid, double hei) {
	cout << "Call Rect class constructor" << endl;
	setWidthHeight(wid, hei);	//set함수를 통해 private에 접근함.
}
//소멸자
Rect::~Rect() {
	cout << "Call Rect class destructor" << endl;
}
//width와 height를 지정하는 set함수
void Rect::setWidthHeight(double wid, double hei) {
	width = wid;
	height = hei;
}
//width를 불러오는 get함수
double Rect::getWidth() {
	return width;
}
//height를 불러오는 get함수
double Rect::getHeight() {
	return height;
}
//직사각형 넓이 구하는 함수
//재정의된 함수, 동적바인딩을 통해 실행될 함수이다.
double Rect::getArea() {
	double ar = width * height;	// 직사각형 넓이 = 가로 * 세로
	setArea(ar);				//기본클래스의 public 멤버를 통해 private 멤버에 접근
	return Shape::getArea();	//같은 getArea() 함수이지만 기본클래스의 private멤버인 area를 return해주는 Shape 클래스의 getArea함수 호출
}

//직사각형 가로 세로 길이 출력하는 함수
//재정의된 함수, 동적바인딩을 통해 실행될 함수이다.
void Rect::print() {
	cout << "Rect's width : " << getWidth() << ", " << "height : " << getHeight() << endl;

}