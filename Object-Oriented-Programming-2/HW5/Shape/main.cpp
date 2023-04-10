//����� �Ǿ��־ ��� ��������� #include �������ν� �� Ŭ������ ����� �� �ְ� �Ѵ�.
#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Rect.h"
#include <iomanip>

int main() {
	Shape* shape1;	//�⺻ Ŭ���� ���� ������ �ڵ� shape1 ����
	Shape* shape2;	//�⺻ Ŭ���� ���� ������ �ڵ� shape2 ����
	Shape* shape3;	//�⺻ Ŭ���� ���� ������ �ڵ� shape3 ����

	Circle c(1.2);		//�Ļ� Ŭ���� �� �ϳ��� Circle �� c ����
	Square s(3.2);		//�Ļ� Ŭ���� �� �ϳ��� Square �� s ����
	Rect r(2.1, 3.4);	//�Ļ� Ŭ���� �� �ϳ��� Rect �� r ����

	shape1 = &c;		//�⺻Ŭ������ shpae1�� Circle�� c�� �ּҸ� ����Ŵ
	shape2 = &s;		//�⺻Ŭ������ shpae2�� Square�� s�� �ּҸ� ����Ŵ
	shape3 = &r;		//�⺻Ŭ������ shpae3�� Rect�� r�� �ּҸ� ����Ŵ

	shape1->print();	//�ڵ��� ���� shape1�� ����Ű�� �ִ� �ּ��� Circle���� ������ �� print()�� ����
	shape2->print();	//�ڵ��� ���� shape2�� ����Ű�� �ִ� �ּ��� Square���� ������ �� print()�� ����
	shape3->print();	//�ڵ��� ���� shape3�� ����Ű�� �ִ� �ּ��� Rect���� ������ �� print()�� ����
	std::cout << std::fixed << std::setprecision(2);						//�Ҽ��� ��°�ڸ� ���� ���
	std::cout << "Area of shape1 : " << shape1->getArea() << std::endl;		//print()�� ���� Circle���� ������ �� getArea()�� ����
	std::cout << "Area of shape2 : " << shape2->getArea() << std::endl;		//print()�� ���� Square���� ������ �� getArea()�� ����
	std::cout << "Area of shape3 : " << shape3->getArea() << std::endl;		//print()�� ���� Rect���� ������ �� getArea()�� ����

	return 0;
}