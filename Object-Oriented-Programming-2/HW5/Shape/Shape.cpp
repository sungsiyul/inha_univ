#include "Shape.h"

Shape::Shape(double ar) : area(ar) {
	//결과화면과 동일시하기 위해 주석처리함.
	//cout << "Call Shape class constructure" << endl;
}
Shape::~Shape() {
	//결과화면과 동일시하기 위해 주석처리함.
	//cout << "Call Shape class destructor" << endl;
}

//Shape 클래스의 private멤버인 area의 값을 지정하기 위한 set함수
void Shape::setArea(double ar) {
	area = ar;
}

//Shape 클래스의 private멤버인 area의 값을 불러오기 위한 get함수
double Shape::getArea() {
	//이 함수는 순수가상함수로써 여기서 동작을 하더라도 결국엔 구체클래스에서 재정의된 함수가 실행된다.
	//그러므로 추상 클래스에서는 함수 원형만을 넘겨주고 나중에 구체클래스에서 area를 출력해야하는데
	//그 때 Shape의 private멤버인 area에 접근해야하기 때문에 area만 return하는 역할을 함.
	return area;
}