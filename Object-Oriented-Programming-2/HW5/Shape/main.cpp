//상속이 되어있어도 모든 헤더파일을 #include 해줌으로써 각 클래스를 사용할 수 있게 한다.
#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Rect.h"
#include <iomanip>

int main() {
	Shape* shape1;	//기본 클래스 형의 포인터 핸들 shape1 생성
	Shape* shape2;	//기본 클래스 형의 포인터 핸들 shape2 생성
	Shape* shape3;	//기본 클래스 형의 포인터 핸들 shape3 생성

	Circle c(1.2);		//파생 클래스 중 하나인 Circle 형 c 생성
	Square s(3.2);		//파생 클래스 중 하나인 Square 형 s 생성
	Rect r(2.1, 3.4);	//파생 클래스 중 하나인 Rect 형 r 생성

	shape1 = &c;		//기본클래스형 shpae1이 Circle형 c의 주소를 가르킴
	shape2 = &s;		//기본클래스형 shpae2가 Square형 s의 주소를 가르킴
	shape3 = &r;		//기본클래스형 shpae3가 Rect형 r의 주소를 가르킴

	shape1->print();	//핸들을 통해 shape1이 가르키고 있는 주소인 Circle에서 재정의 된 print()가 실행
	shape2->print();	//핸들을 통해 shape2가 가르키고 있는 주소인 Square에서 재정의 된 print()가 실행
	shape3->print();	//핸들을 통해 shape3가 가르키고 있는 주소인 Rect에서 재정의 된 print()가 실행
	std::cout << std::fixed << std::setprecision(2);						//소수점 둘째자리 까지 출력
	std::cout << "Area of shape1 : " << shape1->getArea() << std::endl;		//print()와 같이 Circle에서 재정의 된 getArea()가 실행
	std::cout << "Area of shape2 : " << shape2->getArea() << std::endl;		//print()와 같이 Square에서 재정의 된 getArea()가 실행
	std::cout << "Area of shape3 : " << shape3->getArea() << std::endl;		//print()와 같이 Rect에서 재정의 된 getArea()가 실행

	return 0;
}