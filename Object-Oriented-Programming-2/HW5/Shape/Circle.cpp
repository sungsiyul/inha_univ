#include "Circle.h"

//������
Circle::Circle(double rad) {		
	cout << "Call Circle class constructor" << endl;
	setRadius(rad);		//set�Լ��� ���� private�� ������.
}
//�Ҹ���
Circle::~Circle() {		
	cout << "Call Circle class destructor" << endl;
}
//radius�� �����ϴ� set�Լ�
void Circle::setRadius(double rad) {
	radius = rad;
}
//radius�� �ҷ����� get�Լ�
double Circle::getRadius() {
	return radius;
}
//���� ���� ���ϴ� �Լ�
//�����ǵ� �Լ�, �������ε��� ���� ����� �Լ��̴�.
double Circle::getArea() {
	const double PI = 3.141592;			//PI��� ���ڸ� 3.141592�� ����ϱ� ���� const double�� ����
	double ar = radius * radius * PI;	//���� ���� = ������ * ������ * pi
	setArea(ar);						//�⺻Ŭ������ public ����� ���� private ����� ����
	return Shape::getArea();			//���� getArea() �Լ������� �⺻Ŭ������ private����� area�� return���ִ� Shape Ŭ������ getArea�Լ� ȣ��
}

//���� �������� ����ϴ� �Լ�
//�����ǵ� �Լ�, �������ε��� ���� ����� �Լ��̴�.
void Circle::print() {	
	cout << "Circle's radius : " << getRadius() << endl;

}