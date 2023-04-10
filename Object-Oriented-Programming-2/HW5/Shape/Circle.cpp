#include "Circle.h"

//생성자
Circle::Circle(double rad) {		
	cout << "Call Circle class constructor" << endl;
	setRadius(rad);		//set함수를 통해 private에 접근함.
}
//소멸자
Circle::~Circle() {		
	cout << "Call Circle class destructor" << endl;
}
//radius를 지정하는 set함수
void Circle::setRadius(double rad) {
	radius = rad;
}
//radius를 불러오는 get함수
double Circle::getRadius() {
	return radius;
}
//원의 넓이 구하는 함수
//재정의된 함수, 동적바인딩을 통해 실행될 함수이다.
double Circle::getArea() {
	const double PI = 3.141592;			//PI라는 문자를 3.141592로 사용하기 위해 const double로 선언
	double ar = radius * radius * PI;	//원의 넓이 = 반지름 * 반지름 * pi
	setArea(ar);						//기본클래스의 public 멤버를 통해 private 멤버에 접근
	return Shape::getArea();			//같은 getArea() 함수이지만 기본클래스의 private멤버인 area를 return해주는 Shape 클래스의 getArea함수 호출
}

//원의 반지름을 출력하는 함수
//재정의된 함수, 동적바인딩을 통해 실행될 함수이다.
void Circle::print() {	
	cout << "Circle's radius : " << getRadius() << endl;

}