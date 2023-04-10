#include "Square.h"

//������
Square::Square(double si) {
	cout << "Call Square class constructor" << endl;
	setSide(si);	//set�Լ��� ���� private�� ������.
}
//�Ҹ���
Square::~Square() {
	cout << "Call Square class destructor" << endl;
}
//side�� �����ϴ� set�Լ�
void Square::setSide(double si) {
	side = si;
}
//side�� �ҷ����� get�Լ�
double Square::getSide() {
	return side;
}
//���簢���� ���� ���ϴ� �Լ�
//�����ǵ� �Լ�, �������ε��� ���� ����� �Լ��̴�.
double Square::getArea() {
	double ar = side * side;	//���簢�� ���� = �� ���� ���� * �� ���� ����
	setArea(ar);				//�⺻Ŭ������ public ����� ���� private ����� ����
	return Shape::getArea();	//���� getArea() �Լ������� �⺻Ŭ������ private����� area�� return���ִ� Shape Ŭ������ getArea�Լ� ȣ��
}
//���簢�� �� ���� ���̸� ����ϴ� �Լ�
//�����ǵ� �Լ�, �������ε��� ���� ����� �Լ��̴�.
void Square::print() {
	cout << "Square's side : " << getSide() << endl;

}