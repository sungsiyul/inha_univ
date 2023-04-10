#include "Square.h"

//생성자
Square::Square(double si) {
	cout << "Call Square class constructor" << endl;
	setSide(si);	//set함수를 통해 private에 접근함.
}
//소멸자
Square::~Square() {
	cout << "Call Square class destructor" << endl;
}
//side를 지정하는 set함수
void Square::setSide(double si) {
	side = si;
}
//side를 불러오는 get함수
double Square::getSide() {
	return side;
}
//정사각형의 넓이 구하는 함수
//재정의된 함수, 동적바인딩을 통해 실행될 함수이다.
double Square::getArea() {
	double ar = side * side;	//정사각형 넓이 = 한 변의 길이 * 한 변의 길이
	setArea(ar);				//기본클래스의 public 멤버를 통해 private 멤버에 접근
	return Shape::getArea();	//같은 getArea() 함수이지만 기본클래스의 private멤버인 area를 return해주는 Shape 클래스의 getArea함수 호출
}
//정사각형 한 변의 길이를 출력하는 함수
//재정의된 함수, 동적바인딩을 통해 실행될 함수이다.
void Square::print() {
	cout << "Square's side : " << getSide() << endl;

}